#include <iostream>
using namespace std;
void dealArr(int *a){
    int min=0;
    for (int i=1;i<10;i++){
        if (a[i]<a[min]) min=i;
    }
    if (min!=0){
        int temp=a[0];
        a[0]=a[min];
        a[min]=temp;
    }
    int max=0;
    for (int i=1;i<10;i++){
        if (a[i]>a[max]) max=i;
    }
    if (max!=0){
        int temp=a[9];
        a[9]=a[max];
        a[max]=temp;
    } 
}
void scanfArr(int a[10]){
    for (int i=0;i<10;i++)
        cin>>a[i];
}
void printArr(int a[10]){
    for (int i=0;i<10;i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[10];
    scanfArr(a);
    dealArr(a);
    printArr(a);
    return 0;
}