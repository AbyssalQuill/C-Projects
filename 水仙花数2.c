#include <stdio.h>
int main(){
    for (int i=100;i<=999;i++){
        int s = 0;
        int t = i;
        while (t > 0){
            int digit = t % 10;      
            s += digit * digit * digit; 
            t = t / 10;}

        if (s == i) printf("%d\n", i);
    }
    return 0;
}