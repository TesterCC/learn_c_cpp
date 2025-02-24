#include<stdio.h>
// 2个整数求平均数, input: 30,60
int main()
{
    int a,b,s;
    scanf("%d, %d", &a, &b);
    s=(a+b)/2;
    printf("%d and %d average is: %d\n", a,b,s);
    return 0;
}

