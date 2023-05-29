#include <stdio.h>


// https://www.bilibili.com/video/BV1uJ411T7Ar?p=8&vd_source=94cd7a9756f99bacdaa8945a62a91302
int main(int argc, char *argv[]) {
    int i = 0;

    if (argc == 1) {
        printf("You only have one argument...\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have to many arguments!!! \n");
    }

    return 0;
}