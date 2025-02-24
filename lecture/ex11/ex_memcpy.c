#include <stdio.h>
#include <string.h> // 包含 memcpy 的定义

int main() {
    // 定义源数组和目标数组
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    // 使用 memcpy 复制数组内容
    memcpy(dest, src, sizeof(src));

    // 打印目标数组内容
    printf("Copied array: ");    // Copied array: 1 2 3 4 5
    for (int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}