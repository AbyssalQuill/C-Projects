#include <stdio.h>
void matrixSum(int a[5][5],int *sum1){
    *sum1=0;
    for (int i=0;i<5;i++) *sum1+=a[i][i];
}
int main(){
    int a[5][5];
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    }
    int sum1;
    matrixSum(a,&sum1);
    printf("%d",sum1);
    return 0;
}