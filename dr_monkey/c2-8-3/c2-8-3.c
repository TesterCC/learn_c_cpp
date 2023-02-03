/* 小知识点3：
 * (int)(表达式) 将表达式结果强制转换成整型（即抹去表达式结果中的小数点）
 *
 * 输入一个大于0小于999的可以带小数的数字，并输出其个位、十位以及百位数字。
 */
#include<stdio.h>
int main(){
    double a;
    int ge,shi,bai;
    printf("Please input a 3-digit number, such as 123: \n");
    scanf("%lf",&a);

    bai = (int)(a/100);
    shi = (int)((a - bai*100)/10);
    ge = (int)(a - bai*100 - shi * 10);

    printf("个位数字：%d\n",ge);
    printf("十位数字：%d\n",shi);
    printf("百位数字：%d\n",bai);

    return 0;
}

