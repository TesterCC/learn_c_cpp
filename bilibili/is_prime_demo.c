//
// ref: https://www.bilibili.com/video/BV1jsKRzjEMP/
//


#include <stdio.h>

int isPrime(int number);

int main(void) {
    // int i = 11;
    // if (isPrime(i)) {
    //     printf("%d is a prime.\n", i);
    // }

    // 测试1-100中哪些数是质数
    int i = 0;
    int limit = 1000;
loop:
    if (isPrime(i)) {
        printf("%d is prime.\n", i);
    }
    i++;

    if (i > limit) {
        goto end;
    }
    goto loop;

end:
    printf("Program terminated.\n");
    // end of program
    return 0;
}


int isPrime(int number) {
    /*
     * 功能：判断一个正整数是否是质数
     * 输入：n（待判断的整数）
     * 返回：若为质数返回1，否则返回0
     * 质数的定义：在大于 1 的自然数中，除了 1 和它本身以外不再有其他因数的自然数。
     */
    int i = 2;

    if (number <= 1) {
        return 0;
    }

check:
    if (i == number) {
        return 1;
    }

    if (number % i == 0) {
        return 0;
    }

    i++;

    goto check;
}
