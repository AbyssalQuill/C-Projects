#include <stdio.h>

int f(int x) {
    if (x < 1) {
        return x;
    } 
    // 修正条件表达式：用逻辑与 && 连接两个判断
    else if (x >= 1 && x < 10) {
        return 2 * x - 1;
    } 
    // 最后用 else 覆盖剩余情况（x >= 10），更简洁
    else {
        return 3 * x - 11;
    }
}

int main() {
    int x, y;
    scanf("%d", &x);
    y = f(x);
    printf("%d", y);
    return 0;
}