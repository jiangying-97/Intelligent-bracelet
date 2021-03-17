# -
基于ARM cotex-A53和mma8451三轴加速度传感器实现计步器

//如何使用？：
  1、下载源码
  2、进入linux开发环境（装有交叉编译工具链 arm-none-linux-gnueabi-)
  3、"./Makefile"是makefile工程管理文件，终端输入make clean清除原来编译的中间文件
  4、重新执行make,在当前目录下生成inetrface.bin的二进制可执行文件（用于烧写到arm cortex-A53中）
  5、打开串口调试工具，通过交互模式将interface.bin烧写到A53中
  6、执行程序，计步器开始运行，串口终端会打印消息
  7、移动开发板（带有mma8451三轴加速度传感器）可计算步数并打印到终端
