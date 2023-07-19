#include <stdio.h>
#include <string.h>


int main() {

    unsigned int hash = 0xcafe * 31337 + (25 % 17) * 11 + 7 - 1615810207;

    printf("Get your key: ");
    printf("%x\n", hash);
    return 0;
}
