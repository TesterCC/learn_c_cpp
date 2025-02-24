#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // 使用 memcpy 将 src 的内容复制到 dest
    memcpy(dest, src, strlen(src) + 1);  // +1 是为了复制字符串的结束符 '\0'

    // 打印复制后的结果
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}