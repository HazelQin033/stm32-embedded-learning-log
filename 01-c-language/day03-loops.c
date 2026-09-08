#include <stdio.h>

int main(void) {
    /* === 项目 1：for 循环从 1 加到 100 === */
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum);
    printf("（高斯公式速算结果是 5050，对一下）\n\n");

    /* === 项目 2：while 循环倒序打印 10~1 === */
    printf("倒序打印 10 到 1：\n");
    int n = 10;
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }
    printf("\n\n");

    /* === 项目 3：do-while 做"猜数字"（简化版：1~5）=== */
    int secret = 4;  // 写死的答案，方便测试
    int guess = 0;
    int tries = 0;

    printf("=== 猜数字游戏（1~5，秘密数字是 4）===\n");
    do {
        printf("请输入你的猜测（1~5）：");
        scanf("%d", &guess);
        tries++;

        if (guess < secret) {
            printf("太小了，再来！\n");
        } else if (guess > secret) {
            printf("太大了，再来！\n");
        } else {
            printf("猜对了！你用了 %d 次\n", tries);
        }
    } while (guess != secret);

    return 0;
}
