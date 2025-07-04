//
// Created by SecCodeCat on 2025/6/22.
//

#include <stdio.h>
int main()
{
    char *args[2];
    args[0] = "/bin/sh";
    args[1] = NULL;
    execve("/bin/sh", args, NULL);  // execve()这里是mock的函数，看不到具体实现
    return 0;
}