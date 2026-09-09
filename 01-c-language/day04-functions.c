#include <stdio.h>

// 自己定义第一个函数：两个整数相加，返回它们的和
int add(int a, int b) {
    return a + b;
}

// 再定义一个：两个整数相乘
int multiply(int a, int b) {
    return a * b;
}

// 打印一条分隔线（没有返回值的函数，用 void）
void printLine(void) {
    printf("-------------------\n");
}

int main(void) {
    int x = 7;
    int y = 8;

    printLine();
    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d * %d = %d\n", x, y, multiply(x, y));
    printLine();

    return 0;
}
