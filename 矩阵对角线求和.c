#include <stdio.h>
void matrix_sum(int a[3][3], int *sum1, int *sum2){
    *sum1=0;
    *sum2=0;
    for (int i=0;i<3;i++)
    {   *sum1+=a[i][i];
        *sum2+=a[i][2-i];
    }
}
int main(){
    int a[3][3];
    for (int i=0; i< 3;i++)
    {
        for (int j= 0;j<3;j++)
        {scanf("%d",&a[i][j]);}
    }
    int sum1, sum2;
    matrix_sum(a, &sum1, &sum2);
    printf("%d %d", sum1, sum2);
    return 0;
}