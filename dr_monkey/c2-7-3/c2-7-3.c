/*
 * 假如一个人的年薪增长率为 -10% ，请利用公式 p=(1+r)^2，计算10年后他的年薪与今年相比增长了多少。
 * （公式中的r为年增长率，n为年数，p为与今年相比的倍数）
 */
#include<stdio.h>
#include<math.h>
int main(){
    double r,n,p;
    r=-0.1;
    n=10;
    p=pow(1+r,n);
    printf("p=%f\n",p);
    return 0;
}