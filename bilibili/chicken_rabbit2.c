//
// Created by me on 2025/7/28.
//

#include <stdio.h>

// 无返回值，用void；有返回值的话可以是int char
void countChickenRabbit(int headCount, int footCount);


int main(void) {
    countChickenRabbit(12, 24);
    return 0;
}


void countChickenRabbit(int headCount, int footCount) {
    /*
 * 鸡兔同笼问题：
 * 笼子里有若干只鸡和兔，共有 headCount 个头和 footCount只脚
 * 每只鸡有1个头和2只脚；每只兔有1个头和4只脚
 * 请根据给定的头数和脚数，计算鸡和兔的数量
 */
    int chickenCount, rabbitCount, totalFeet;
    int hasSolution = 0;

    // 使用for循环遍历所有可能的鸡的数量
    for (chickenCount = 0; chickenCount <= headCount; chickenCount++) {
        rabbitCount = headCount - chickenCount;
        totalFeet = 2 * chickenCount + 4 * rabbitCount;

        if (totalFeet == footCount) {
            printf("Chicken=%i \nRabbit=%i \n", chickenCount, rabbitCount);
            hasSolution = 1;
            break; // 找到解后立即退出循环
        }
    }

    if (!hasSolution) {
        printf("no answer\n");
    }

    printf("Program terminated.\n");
}
