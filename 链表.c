#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
int main() {
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 10;
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 20;
// 把两节车厢连起来
    first->next = second; // first 的下一个是 second
    second->next = first; // second 指向 first，形成循环
    
    // 遍历链表：从头开始一个个打印（最多遍历两次避免无限循环）
    printf("链表内容：");
    struct Node* temp = first; // 从第一个开始
    int count = 0;
    while (count < 2) {
        printf("%d -> ", temp->data);
        temp = temp->next; // 移动到下一个
        if (temp == first) {
            count++;
            
        }
    }
    printf("回到起点\n");
    
    free(first);
    free(second);
    return 0;
}