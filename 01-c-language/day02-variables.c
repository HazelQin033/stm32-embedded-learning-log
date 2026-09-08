#include <stdio.h>

int main(void) {
    int age = 22;              // 整数
    float height = 1.50f;      // 浮点数（f 表示 float）
    char initial = 'H';        // 字符

    int born_year = 2026 - age;

    printf("我叫 Hazel，今年 %d 岁\n", age);
    printf("身高 %.2f 米\n", height);
    printf("首字母是 %c\n", initial);
    printf("我出生于 %d 年\n", born_year);

    // 简单判断：是否成年
    if (age >= 18) {
        printf("我是成年人\n");
    } else {
        printf("我是未成年人\n");
    }

    return 0;
}
