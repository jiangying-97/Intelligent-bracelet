/*
 * start.S

 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * Exception vector table
 */
.text
	.arm

	.global	_start
_start:
	b reset
	ldr pc, _undefined_instruction
	ldr pc, _software_interrupt
	ldr pc, _prefetch_abort
	ldr pc, _data_abort
	ldr pc, _not_used
	ldr pc, _irq
	ldr pc, _fiq

_undefined_instruction:
	.long undefined_instruction
_software_interrupt:
	.long software_interrupt
_prefetch_abort:
	.long prefetch_abort
_data_abort:
	.long data_abort
_not_used:
	.long not_used
_irq:
	.long irq
_fiq:
	.long fiq

 /* The actual reset code */
reset:
	/* Set Vector Base Address Register */
	ldr	r0,=0x43c00000
	mcr	p15,0,r0,c12,c0,0		@ Vector Base Address Register
	mrc p15, 0, r0, c1, c0, 0
	bic r0, #(1<<13)
	mcr p15, 0, r0, c1, c0, 0

	/* Set the cpu to svc32 mode */
	mrs r0, cpsr
	bic r0, r0, #0x1f
	orr r0, r0, #0xd3
	msr cpsr, r0

	/* Enable NEON/VFP unit */
	mrc p15, #0, r1, c1, c0, #2
	orr r1, r1, #(0xf << 20)
	mcr p15, #0, r1, c1, c0, #2
	mov r1, #0
	mcr p15, #0, r1, c7, c5, #4
	mov r0, #0x40000000
	fmxr fpexc, r0

	/* Cache init */
	mrc	p15, 0, r0, c0, c0, 0
	and	r1, r0, #0x00f00000
	and	r2, r0, #0x0000000f
	orr r2, r2, r1, lsr #20-4
	cmp r2, #0x30
	mrceq p15, 0, r0, c1, c0, 1
	orreq r0, r0, #0x6
	mcreq p15, 0, r0, c1, c0, 1

	/* Invalidate L1 I/D */
	mov r0, #0
	mcr	p15, 0, r0, c8, c7, 0
	mcr	p15, 0, r0, c7, c5, 0

	/* Disable mmu stuff and caches */
	mrc p15, 0, r0, c1, c0, 0
	bic r0, r0, #0x00002000
	bic r0, r0, #0x00000007
	orr r0, r0, #0x00001000
	orr r0, r0, #0x00000002
	orr r0, r0, #0x00000800
	mcr p15, 0, r0, c1, c0, 0



	/* Initialize stacks */
	//ldr    r0, stacktop        /* get stack top pointer */

	/*********svc mode stack************/
	mrs r0, cpsr
	bic r0, r0, #0xdf
	orr r1, r0, #0xd3
	msr cpsr_cxsf, r1
	ldr sp, _stack_svc_end

	/**********undef mode stack**********/

	bic r0, r0, #0xdf
	orr r1, r0, #0x1b
	msr cpsr_cxsf, r1
	ldr sp, _stack_und_end

	/*********abort mode stack*********/
	bic r0, r0, #0xdf
	orr r1, r0, #0x17
	msr cpsr_cxsf, r1
	ldr sp, _stack_abt_end

	/*********irq mode stack************/
	bic r0, r0, #0xdf
	orr r1, r0, #0x12
	msr cpsr_cxsf, r1
	ldr sp, _stack_irq_end

	/*********fiq mode stack************/
	bic r0, r0, #0xdf
	orr r1, r0, #0x11
	msr cpsr_cxsf, r1
	ldr sp, _stack_fiq_end

   /*********user mode stack************/
	bic r0, r0, #0xdf
	orr r1, r0, #0x10
	msr cpsr_cxsf, r1
	ldr sp, _stack_usr_end

   /*** clear bss section ***/
	ldr	r0, =__bss_start	/* this is auto-relocated! */
	ldr	r1, =__bss_end__	/* this is auto-relocated! */
	mov	r2, #0x00000000		/* prepare zero to clear BSS */

clbss_l: cmp r0, r1			/* while not at end of BSS */
	strlo r2, [r0]			/* clear 32-bit BSS word */
	addlo r0, r0, #4		/* move to next */
	blo	clbss_l

	/*Close Watch Dog Timer*/
	ldr r0, =0xC0012004
	ldr r1, [r0]
	bic r1, r1, #(0x1 << 26)
	str r1, [r0]
	
	ldr r1, [r0]
	orr r1, r1, #(0x1 << 26)
	str r1, [r0]
	
	ldr r0, =0xC0012004
	ldr r1, [r0]
	bic r1, r1, #(0x1 << 25)
	str r1, [r0]
	
	ldr r1, [r0]
	orr r1, r1, #(0x1 << 25)
	str r1, [r0]
	
	ldr r0, =0xC0019000
	ldr r1, [r0]
	and r1, r1, #0xFFFFFFDF
	str r1, [r0]
	@ ADC控制器使能
	ldr r0, =0xC0012004
	ldr r1, [r0]
	bic r1, r1, #(0x1 << 27)
	str r1, [r0]
	
	ldr r1, [r0]
	orr r1, r1, #(0x1 << 27)
	str r1, [r0]
	
	ldr r0, =0xC0012004
	ldr r1, [r0]
	bic r1, r1, #(0x1 << 28)
	str r1, [r0]
	
	ldr r1, [r0]
	orr r1, r1, #(0x1 << 28)
	str r1, [r0]
	
	/* Call _main */
	b main


/*
 * Exception handlers
 */
	.align 5
undefined_instruction:
	b	.

	.align 5
software_interrupt:
	b	.

	.align 5
prefetch_abort:
	b	.

	.align 5
data_abort:
	b	.

	.align 5
not_used:
	b	.

	.align 5
	.global irq
irq:
	sub  lr,lr,#4  @ 修正返回地址
	stmfd sp!,{r0-r12,lr}  @ 保存现场
	bl do_irq
	ldmfd sp!,{r0-r12,pc}^  @ 恢复现场

	.align 5
fiq:
	b . 


_stack_svc_end:      .long   stack_svc + 512
_stack_und_end:      .long   stack_und + 512
_stack_abt_end:      .long   stack_abt + 512
_stack_irq_end:      .long   stack_irq + 512
_stack_fiq_end:      .long   stack_fiq + 512
_stack_usr_end:      .long   stack_usr + 512

.data
stack_svc:      .space   512
stack_und:      .space   512
stack_abt:      .space   512
stack_irq:      .space   512
stack_fiq:      .space   512
stack_usr:      .space   512
