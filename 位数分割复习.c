#include <stdio.h>
int main(){
    int n,i=0,a[3]={0};
    scanf("%d",&n);
    while(n>0){
        a[i++]=n%10;
        n/=10;
    }
    for(i=2;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}