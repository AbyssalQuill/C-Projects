#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int num=rand()%10;//0-9
    int num2=rand()%10+1;//1-10
    //生成a-b的随机数
    //  int num3=rand()%(b-a+1)+a;
}