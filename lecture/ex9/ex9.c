#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
//    int i; // breaking compile warning
    while (i < 25) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}