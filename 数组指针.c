#include <stdio.h>

int main() {
    int a[10];
    int *p = a; // 指针p指向数组a
    int i;
    
    printf("输入3个整数:");
    for(i=0;i<3;i++)
    {
        scanf("%d", p+i); // 使用指针接收输入
    }
    
    // 分析：for(p=a; p<a+3; p++)
    // p=a: 初始化指针p指向数组起始位置
    // p<a+3: 指针p未超过数组前3个元素的范围
    // p++: 每次循环指针p移动到下一个元素
    for(p = a; p < a + 3; p++) {
        printf("%d ", *p); // 使用指针访问数组元素
    }
    printf("\n");
    return 0;
}