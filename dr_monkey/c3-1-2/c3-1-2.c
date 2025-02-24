#include<stdio.h>

/*
 *            -1, x < 0
 * 函数   y =  0,  x = 0  , 编写程序输入x，输出相应的y值。
 *            1, x > 0
 */


int main() {
    int x, y;
    printf("please x value: \n");
    scanf("%d", &x);
    // if或else后只有一句可以不用大括号
    if (x < 0)
        y = -1;
    else if (x > 0)
        y = 1;
    else
        y = 0;

    printf("x=%d, y=%d", x, y);
    return 0;
}
