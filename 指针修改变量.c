#include <stdio.h>
void pass_int(int *num){
    *num = 100;
}

int main(){
    int num_1 = 10;
    pass_int(&num_1);
    printf("num_1 = %d\n", num_1);
    return 0;
}