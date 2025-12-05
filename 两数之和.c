#include <stdio.h>
void sum(int a[4],int target){
    int i,j;
    for (i=0;i<10;i++){
        for (j=i+1;j<10;j++){
            if (a[i]+a[j]==target){
                printf("%d %d\n",i,j);
                return;
            }
        }

    }

}
int main(){
    int a[10];
    int i;
    for (i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    sum(a,target);
    return 0;
}