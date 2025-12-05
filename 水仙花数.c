#include <stdio.h>
int main(){
    for (int i=100;i<=999;i++){
        int t=i,s=0;
        while (t>0){
            s+=(t%10)*(t%10)*(t%10);
            t/=10;
        }
        if (s==i) {printf("%d\n",i);
    }
}
    return 0;
}