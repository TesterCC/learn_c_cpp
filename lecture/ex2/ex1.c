//
// Created by SecCodeCat on 2021/5/14.
//

/*
 * make ex1
 * CFLAGS="-Wall" make ex1
 * -Wall参数让编译器cc汇报所有的警告信息
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);

    return 0;
}