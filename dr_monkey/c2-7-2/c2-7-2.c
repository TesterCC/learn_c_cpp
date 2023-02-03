/*
 * 利用公式求x1,2 = (-b √ b^2-4ac)/2a 一元二次方程 a^2 +bx +c = 0 的两个根，a,b,c由键盘输入，且b^2-4ac>0
 * testcase: 4,9,5
 */
#include<stdio.h>
#include<math.h>   // CentOS 8.2有点问题

int main() {
    double a, b, c, d, x1, x2;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    d = sqrt(b * b - 4 * a * c);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
    return 0;
}