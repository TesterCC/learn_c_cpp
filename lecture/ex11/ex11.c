#include <stdio.h>

// https://www.bilibili.com/video/BV1KW411o7QF?p=12
int main(int argc, char *argv[]) {
    int numbers[4] = {0};   // initialization with default value
    char name[4] = {'a'};

    // first - print them out raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'C';
    name[3] = '\0';  // NULL bytes to end, gcc 12.2.0 on kali will not report error?

    // then print them out initializaed
    printf("numbers now: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each now: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name now: %s\n", name);

    // another way to use name
    char *another = "Tim";

    printf("another: %s\n", another);
    printf("another each now: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}