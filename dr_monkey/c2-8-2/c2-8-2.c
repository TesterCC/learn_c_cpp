/* 小知识点2：
 * %e 以科学计数法显示
 */
#include<stdio.h>
int main()
{
    printf("output length is %e cm.\n",123.456);
    printf("output length is %10.2e cm.\n",123.456);
    printf("output length is %-10.2e cm.\n",123.456);

    return 0;
}

