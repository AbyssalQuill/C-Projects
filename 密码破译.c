#include <stdio.h>
int main() {
    char s[10]; 
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0'){
        s[i]+=4;
        ++i;
    }
    printf("%s",s);
    return 0;
}