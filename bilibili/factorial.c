//
// ref: https://www.bilibili.com/video/BV1jsKRzjEMP/
// 注意：用goto不是好习惯
//


#include <stdio.h>


int factorial(int number) {
    // method 1
    int result = 1;
    int i=1;

    loop:
        if (i>number) {
            return result;
        }
    result = result * i;
    i++;
    goto loop;
}


int factorial_new(int number) {
    // method 2: 递归 recursion, 不推荐
    if (number==0) {
        return 1;
    }
    return number * factorial_new(number-1);
}



int main(void) {
    int i; // just declare variable

    // notice user input a int
    printf("Please enter a number: \n");
    // 接收用户输入的整数，存储到i中
    scanf("%d", &i);  // %d表示读取整数，&i是变量i的地址（scanf需要地址来修改变量）

    // printf("\n");
    printf("[TEST-01] !%i factorial is %i\n", i, factorial(i));

    // printf("测试中文输出\n"); // output normal in linux, but can't display normal in windows

    printf("[TEST-02] !%i factorial is %i\n", i, factorial_new(i));
}
