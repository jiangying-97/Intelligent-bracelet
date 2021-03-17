# CORTEX-A53 PERI DRIVER CODE
# VERSION 2.0
# ATHUOR www.hqyj.com
# MODIFY DATE
# 2019.04.12  Makefile
# SHELL=C:/Windows/System32/cmd.exe
CROSS_COMPILE = arm-none-linux-gnueabi-
NAME =interface
#=============================================================================#
CFLAGS += -g   -O0  -mabi=apcs-gnu -mfpu=neon -mfloat-abi=softfp  -fno-builtin \
			-nostdinc  -I ./common/include      		                                       
LD	= $(CROSS_COMPILE)ld
CC	= $(CROSS_COMPILE)gcc
NM  = $(CROSS_COMPILE)nm
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump
#============================================================================#
OBJSss 	:= $(wildcard start/*.S) $(wildcard common/src/*.S) $(wildcard *.S)\
		   $(wildcard start/*.c) $(wildcard common/src/*.c) 			   \
		   $(wildcard usr/*.c) $(wildcard *.c) 
OBJSs  	:= $(patsubst %.S,%.o,$(OBJSss))
OBJS 	:= $(patsubst %.c,%.o,$(OBJSs))
#============================================================================#
%.o: %.S 
	@echo "  AS      $@"
	@$(CC) $(CFLAGS) -c -o  $@ $<
%.o: %.c
	@echo "  CC      $@"
	@$(CC) $(CFLAGS) -c -o  $@ $<
all:clean  $(OBJS)
	@echo "  LD      Linking $(NAME).elf"
	@$(LD)  $(OBJS) -T map.lds -o $(NAME).elf
	@echo "  OBJCOPY Objcopying $(NAME).bin"
	@$(OBJCOPY)  -O binary  $(NAME).elf $(NAME).bin 
	@echo "  MAP     Generating $(NAME).map"
	@$(NM) $(NAME).elf > $(NAME).map 
	@echo "  OBJDUMP Objdumping $(NAME).dis"
	@$(OBJDUMP) -DS $(NAME).elf > $(NAME).dis 
install:
	#sudo cp $(NAME).bin  /mnt/hgfs/share/19021/
#============================================================================#
distclean clean:
	@rm -rf $(OBJS) *.elf *.bin *.dis *.map *.o
	@echo "  CLEAN   complete."
#============================================================================#
