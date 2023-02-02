/*
 * e^x  log 等数学运算
 * 给出三角形三边a、b、c的长，利用公式 area = √ s(s-a)(s-b)(s-c)
 * 求该三角形的面积area(公式中的s=(a+b+c)/2)
 */
#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, s, area;
    printf("请输入三角形的长宽高3个数值，如：3,4,5 \n");
    scanf("%lf,%lf,%lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a=%f\tb=%f\tc=%f\n", a, b, c);
    printf("area=%f\n", area);
    return 0;
}