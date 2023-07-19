# Read Me

Kali2022.2/CentOS 8.2 + gcc + g++ + gdb + cmake 的C/C++开发环境，gdb版本不能太低，否则CLion无法识别

# 开发方式

CLion远程调试VM Kali 2022.2

CLion远程调试VM CentOS 8.2

CentOS 8.2 安装lldb： `dnf install lldb`

valgrind 内存检测神器

# Content

- main.c   (Hello World)
- lecture  (learn c the hard way demo)

# Video

[中文字幕配套视频](https://www.bilibili.com/video/BV1KW411o7QF)

---

# 最简单的Linux C远程调试环境

版本符合CLion要求，就可以直接调式，配置好toolchain和cmake

# CLion远程调试配置

这个配置教程写的很详细: https://blog.51cto.com/u_986899/5658812

# 同时编写多个main函数运行文件

默认情况下，CLion只能有一个main主函数，但在练习中，我们往往同时需要多个单文件的main，这样就可以把练习的保留下来，下次使用的时候再运行即可。

C不像java只有有main旁边就有一个运行图标供你运行，在CLion中可修改一下CMakeLists.txt

配置文件即可，使用方法也很简单，在CMakeLists.txt添加一个add_executable()即可，语法如下：

```
add_executable(名字 源码)

这样可以在一个目录下放多个包含main函数的.c文件，方便学习和练习

可参考本项目 CMakeLists.txt
```