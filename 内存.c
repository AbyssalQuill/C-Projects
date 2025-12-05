#include <stdio.h>
#include <stdlib.h>

int main() {
    // 定义学生数量指针和数量
    int* students;
    int numStudents = 12;
    
    // 分配内存
    students = calloc(numStudents, sizeof(*students));
    // 判断是否分配成功
    if (students == NULL) {
        printf("内存分配失败!\n");
        return 1;  // 返回错误码
    }
    
    // 打印分配的总字节数
    printf("分配的总字节数: %d\n", numStudents * sizeof(*students));
    
    return 0;
    // 程序结束
    
}
// 注意：
// 1. 程序结束后，再次分配内存，会导致之前分配的内存被释放掉，导致之前分配的内存地址失效。
// 2. 为了避免悬垂指针，在分配内存后，将指针置为 NULL。
