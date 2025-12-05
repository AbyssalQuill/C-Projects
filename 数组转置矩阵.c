#include <stdio.h>
void transf(int (*a)[3],int n,int m) {
    int i,j,temp;
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            /*a[i][j]=a[i][j]^a[j][i];
            a[j][i]=a[i][j]^a[j][i];
            a[i][j]=a[i][j]^a[j][i];*/
        }
    }
}
int main(){
    int a[3][3],i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    transf(a,3,3);
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}