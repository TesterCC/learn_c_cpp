/*
 * execve是标准库中的函数，它属于 Unix/Linux 系统调用，定义在<unistd.h>头文件中
 * 如果execve调用失败（如程序不存在），会返回 -1
 * gcc -o shell_demo shell_demo.c
 * run in linux:
 * ./shell_demo
 * sh-5.1#
 */
#include <stdio.h>
#include <unistd.h>
int main()
{
    char *args[2];
    args[0] = "/bin/sh";
    args[1] = NULL;
    // 如果execve调用失败（如程序不存在），会返回 -1,并继续执行后续代码（本例中返回 0），通常需要在调用失败后添加错误处理
    // execve("/bin/sh", args, NULL);
    if (execve("/bin/sh", args, NULL) == -1) {
        perror("execve failed");
        return 1;
    }
    return 0;
}
