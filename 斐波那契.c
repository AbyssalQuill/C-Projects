#include <stdio.h>
#include <time.h>

int fib(int n) {
    // 处理负数输入的边界情况
    if (n < 0) {
        return -1; // 或者可以返回其他表示错误的值
    }
    else if (n==0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        int prev2 = 0;  // fib(0)
        int prev1 = 1;  // fib(1)
        int current;
        for (int i = 2; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
}

int main() {
    clock_t start, finish;
    double duration;
    start = clock();
    printf("%d", fib(41));
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\n运行时间：%.15f秒\n", duration);
    return 0;

}
