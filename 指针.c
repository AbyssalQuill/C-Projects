//指针
#include <stdio.h>
/*int main() {
    int a = 10;
    int *p = &a;
    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", &a);
    return 0;
}*/

/*int main() {
    int a = 10;
    int *p = &a;
    printf("%d\n", *p);
    *p = 20;
    printf("%d\n", a);
    return 0;
}*/

/*int main() {



    int a = 10;
    int *p = &a;
    printf("%d\n", *p);
    p = p + 1;
    printf("%d\n", *p);
        return 0; 

}*/
/*int main() {
    int a = 10;
    int *p = &a;
    int b = *p;
    printf("%d\n", b);
    return 0;
}*/
//数组指针
int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", *p);
        p++;
    }
    return 0;}