#include<stdio.h>

int main() {
    int a;
    printf("please input your score: \n");
    scanf("%d", &a);

    if (a > 60) {
        printf("Pass!\n");
    } else {
        printf("Failed...\n");
    }
    return 0;
}
