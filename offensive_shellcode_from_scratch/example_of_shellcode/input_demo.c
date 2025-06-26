/*
Shellcode常被用于缓冲区溢出攻击。
简单来说，当程序向内存写入的数据量超过预留空间时，就会发生缓冲区溢出。最终可能导致程序崩溃、数据被覆盖或执行其他代码。
*/
#include <stdio.h>
int main()
{
    char input[12];
    printf("Please enter your password: ");

    // If the password is longer than 12 characters, a buffer overflow will happen;
    scanf("%s", input);
    printf("Your password is: %s\n", input);

    return 0;
}