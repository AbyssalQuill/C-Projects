#include <stdio.h>
int main(){
    int a[3][3];
    int i,j; 
    printf("请输入3行3列的数组元素：\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("数组的和为%d\n",sum);
    return 0;
}