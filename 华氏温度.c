#include <stdio.h>
float F2C(float f)
{
    return (f-32)*5/9;
}
int main(){
    float f;
    scanf("%f",&f);
    printf("%.2f",F2C(f));
    return 0;
}