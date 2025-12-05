//输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。
#include <stdio.h>
int main(){
    int a[10],i,sum=0,mean,count=0;
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    mean=sum/10;
    for (i=0;i<10;i++){
        if (a[i]>mean){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}