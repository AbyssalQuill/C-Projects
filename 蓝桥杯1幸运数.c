#include <stdio.h>
//幸运数，一个数有偶数位，前一半与后一半之和相等的数
int LuckyNum(int n) {
    int digits[9]={0};
    int count=0;
    //分解
    while (n> 0) {
        digits[count++]=n%10;
         n/= 10;}
    //位数为奇不是幸运数
    if (count%2!= 0) {return 0;}

    
    //初始和
    int sum1 = 0, sum2 = 0;
    int half = count / 2;
    
    //计算和
    for (int i=0;i<half; i++) {sum1+=digits[i];}
    
    for (int i=half; i<count; i++) {sum2+=digits[i];}
    
    return sum1==sum2 ? 1 : 0;
}

//1-100000000内的幸运数个数
int main(){
    int x=0;
    for (int i = 1; i <= 100000000; i++) {
        if (LuckyNum(i)) {
            x+=1;
        }
    }
    printf("1-100000000内的幸运数个数是：%d\n",x);
    return 0;
}

