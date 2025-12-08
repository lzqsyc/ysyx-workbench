#include <stdio.h>
#include <stdlib.h>
/* 必须包含 readline 头文件 */
#include <readline/readline.h>
#include <readline/history.h>

int main() {
    char *input;

    // 循环读取用户输入，直到遇到 EOF (Ctrl+D)
    while ((input = readline("ysyx> ")) != NULL) {
        // 如果输入不为空，将其添加到历史记录中
        // 这样用户按 "上" 箭头键就能找回刚才输入的命令
        if (input[0] != '\0') {
            add_history(input);
        }

        printf("ysyx: %s\n", input);

        // 处理完命令后，必须释放 readline 分配的内存
        free(input);
    }

    printf("\n再见！\n");
    return 0;
}