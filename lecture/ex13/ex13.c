#include <stdio.h>

/*
 *  https://www.bilibili.com/video/BV1KW411o7QF?p=13
 *  exercise 12 -- Sizes and Arrays   sizeof()
 *  make ex12
 *  in terminal:
 *  ./ex12
 */

int main(int argc, char *argv[])
{
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));   // pass type is allow, sizeof()返回存储该类型需要的字节数
    // printf("The size of an int: %lu\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));  // 4 bytes * 5
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));  // 20/4=5
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]); // 10 12 ; // wrong test -1744633228, 12
    // printf("The first area is %d, the 2nd %d.\n", areas[10], areas[1]); // 10 12 ; // wrong test -1744633228, 12

    printf("The size of a char: %ld\n", sizeof(char));  // 1
    printf("The size of name (char[]): %ld\n", sizeof(name)); // 4 "zed\0"
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n",
            sizeof(full_name) / sizeof(char));

    full_name[12] = 'X';

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
