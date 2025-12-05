#include <stdio.h>
#include <stdlib.h>

int main() {
FILE*fp;
fp=fopen("你好.txt","r");
if(fp==NULL)
{
    printf("无法打开文件\n");
    exit(1);
}
else {
    char mystring[100];//定义一个字符数组，用来存放读取到的字符串
while(fgets(mystring,100,fp)!=NULL){//循环读取文件，直到读到文件末尾
    printf("%s",mystring);//打印读取到的字符串
}
}
return 0;
}