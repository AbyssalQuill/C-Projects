#include<stdio.h>
double fact(int x){
    double result=1;
    for (int i=1;i<=x;i++){
        result*=i;
    }
    return result;}
double mypow(double x,int n){
    double result=1;
    for (int i=0;i<n;i++){
        result*=x;

    }
    return result;}

int main(){
    double x,sum=0;
    int n;
    scanf("%lf%d",&x,&n);
    for (int i=1;i<=n;i++){
        sum+=mypow(-1,i-1)*mypow(x,i)/fact(i);
    }
    printf("%.4lf",sum);
    return 0;



    }


