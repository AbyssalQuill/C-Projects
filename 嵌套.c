#include<stdio.h>
//嵌套循环
int main()
{
int i, j;  
  
// 外部循环  
for (i = 1; i <= 2; ++i) {  
  printf("外部: %d\n", i);  // 执行 2 次  
  
  // 内部循环  
  for (j = 1; j <= 3; ++j) {  
    printf(" 内部: %d\n", j);  // 执行 6 次 (2 * 3)  
  }  
}
return 0;
}