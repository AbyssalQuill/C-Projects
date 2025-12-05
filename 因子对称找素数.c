#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n<=1) return 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;}
    return 1;}

int main(){
    int T;  //输入0-T范围内的素数
    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        int num;
        scanf("%d", &num);
        if (isPrime(num)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}