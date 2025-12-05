#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10];
    for (int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int min=abs(a[0]);
    int min_index = 0;
    for (int i=1;i<10;i++){
        if (abs(a[i])<min){
            min=abs(a[i]);
            min_index=i;
        }
    }
    int temp=a[min_index];
    a[min_index]=a[9];
    a[9] = temp;
    for (int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}