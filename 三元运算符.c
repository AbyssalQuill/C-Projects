#include <stdio.h>

int main(){
    int n;
    printf("请输入数字的个数: ");
    scanf("%d", &n);
    double num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&num[i]);
    }   
    double maxnum=num[0];
    for(int i=1;i<n;i++)
    {
        maxnum=maxnum>num[i]?maxnum:num[i];
    }
    printf("最大值是: %lf",maxnum);
    return 0;
}