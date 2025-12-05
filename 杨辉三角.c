#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ytrian[n][n];
    for (int i=0;i<n;i++){
        ytrian[i][0]=1;
        ytrian[i][i]=1;
        for (int j=1;j<i;j++){
            ytrian[i][j]=ytrian[i-1][j-1]+ytrian[i-1][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int m=0;m<n-1-i;m++){
            printf("  ");
        }
        for (int j=0;j<=i;j++){
            printf("%5d",ytrian[i][j]);
        }
        printf("\n");
    }
    return 0;
}