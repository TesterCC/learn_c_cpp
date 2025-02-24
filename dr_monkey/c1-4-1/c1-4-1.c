#include<stdio.h>

/*
 * 将"oyra"加密，用原字母后一个字母来替换。如：B替换A
 */
// char demo
int main() {
    char c1 = 'o', c2 = 'y', c3 = 'r', c4 = 'a';  // 不要用双引号，用单引号
    c1 += 1;  // p
    c2 += 1;  // z
    c3 += 1;  // s
    c4 += 1;  // b
    printf("result: %c%c%c%c \n", c1, c2, c3, c4);
    return 0;
}



