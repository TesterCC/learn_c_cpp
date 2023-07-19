#include <string.h>
#include <stdio.h>

// https://thesquareplanet.com/blog/smashing-the-stack-21st-century/

void copy(char *str){
    char buffer[16];
    strcpy(buffer, str);
    printf("%s\n", buffer);
}

int main (int argc, char **argv){
    copy(argv[1]);
    return 0;
}

