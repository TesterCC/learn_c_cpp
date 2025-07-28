//
// ref: https://www.bilibili.com/video/BV1jsKRzjEMP/
//


#include <stdio.h>

int isPrime(int number);


int main(void) {
    // 测试1到limit中哪些数是质数
    int limit = 1000;

    // 使用for循环遍历1到1000的所有数
    for (int i = 0; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d is prime.\n", i);
        }
    }

    printf("Program terminated.\n");
    return 0;
}


int isPrime(int number) {
    /*
 * 功能：判断一个正整数是否是质数
 * 输入：n（待判断的整数）
 * 返回：若为质数返回1，否则返回0
 * 质数的定义：在大于 1 的自然数中，除了 1 和它本身以外不再有其他因数的自然数。
 */
    int i;

    if (number <= 1) {
        return 0;
    }

    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}
