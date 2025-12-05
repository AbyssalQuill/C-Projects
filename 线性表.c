#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数用于计算两个二进制字符串的和
char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB) ? lenA : lenB;
    // 结果最大长度为maxLen + 1（可能有进位）+ 1（字符串结束符）
    char* result = (char*)malloc(sizeof(char) * (maxLen + 2));
    int i = lenA - 1, j = lenB - 1, k = 0;
    int carry = 0;
    
    // 从两个字符串的末尾开始相加
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        
        // 加上a的当前位（如果还有）
        if (i >= 0) {
            sum += a[i--] - '0'; // 将字符'0'或'1'转换为整数0或1
        }
        
        // 加上b的当前位（如果还有）
        if (j >= 0) {
            sum += b[j--] - '0';
        }
        
        // 计算当前位的值和进位
        result[k++] = (sum % 2) + '0'; // 将结果转换回字符
        carry = sum / 2;
    }
    
    result[k] = '\0'; // 字符串结束符
    
    // 反转结果，因为我们是从后往前计算的
    int left = 0, right = k - 1;
    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }
    
    return result;
}

int main() {
    char a[10001], b[10001];
    // 读取输入的两个二进制字符串
    scanf("%s %s", a, b);
    
    // 计算它们的和
    char* sum = addBinary(a, b);
    
    // 输出结果
    printf("%s\n", sum);
    
    // 释放动态分配的内存
    free(sum);
    
    return 0;
}
