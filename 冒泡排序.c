#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int *arr,int n){
    int i,j;
    int *ptr1,*ptr2,temp;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-1-i;j++){
            ptr1=arr+j;
            ptr2=arr+j+1;
            if (*ptr1>*ptr2){
                temp=*ptr1;
                *ptr1=*ptr2;
                *ptr2=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for (int *ptr=arr;ptr<arr+n;ptr++) scanf("%d",ptr);
    bubbleSort(arr, n);
    for (int *ptr=arr;ptr<arr+n;ptr++) printf("%d ",*ptr);
    free(arr);
    return 0;}