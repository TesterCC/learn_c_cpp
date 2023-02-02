#include<stdio.h>

// 输入一个大写字母，可以输出其对应的小写字母
int main() {
    char a, b;

    printf("请输入大写字母：\n");
    scanf("%c", &a);
    // 一个大写字母的ASCII编码+32就是其对应的小写字母
    b = a + 32;
    printf("%c的小写字母是%c\n", a, b);

    return 0;
}