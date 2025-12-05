#include <stdio.h>
#include <stdlib.h>
int *memo;
int fib(int n){
    if (n==0) return 0;
    if (n==1||n==2) return 1;
    if (memo[n]!=0) return memo[n];
    memo[n]=fib(n-1)+fib(n-2);
    return memo[n];
}


int main(){
    int n;
    scanf("%d",&n);
    memo=(int*)malloc(n*sizeof(int));
    printf("%d\n",fib(n));
    return 0;
}