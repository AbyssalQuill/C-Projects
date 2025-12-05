#include <stdio.h>

int main()
{int time=20;
    char *greeting=(time<18)?"Good day":"Good evening";
    printf("%s\n",greeting);
    return 0;
}