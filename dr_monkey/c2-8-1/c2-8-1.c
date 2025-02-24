/* 小知识点1：小数总长度m位，小数部分位n位, -补空格到后面
 * %m.nf
 */
#include<stdio.h>
int main()
{
    double a,b,c;
    a = 3.67;
    b = 5.43;
    c = 6.21;
    printf("设置a为%5.2f，b为%-5.2f，c为%7.4f\n",a,b,c);
    return 0;
}
