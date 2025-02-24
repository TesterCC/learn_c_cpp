#include<stdio.h>

int main() {
    char a, b, c;

    printf("请输入3个大写字母，如：FOX \n");
    a = getchar(); // 获取一个输入的字符并赋值
    b = getchar(); // 获取一个输入的字符并赋值
    c = getchar(); // 获取一个输入的字符并赋值

    a += 32;
    b += 32;   // same to b = b + 32;
    c += 32;

    printf("输出结果如下：\n");
    putchar(a);  // 输出变量
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}