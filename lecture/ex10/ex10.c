#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    // '\0' C字符串结尾的NUL字节
    for (i = 0; argv[1][i] != '\0'; i++) {
//        printf("%s\n",argv[0]);  // ./ex10  for debug
        char letter = argv[1][i];
//        printf("%c -> ", letter);  // for debug

        // switch -> jump table
        // working on calc integer, e.g. ASCII code. Based on Integer Control goto statement
        // c switch can't support express
        switch (letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);  // logic statement
                break;   // recommend first write it, then write logic statement

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;
            // always need default branch
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
}