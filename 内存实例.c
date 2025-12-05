#include <stdio.h>
#include <stdlib.h>

int main()
{int*nums=NULL;
    int size,newsize,i;
    printf("请输入初始数组大小:");
    scanf("%d",&size);
    nums=(int*)malloc(size*sizeof(int));
    if(nums==NULL)
    {
        printf("内存分配失败！");
        return 1;
    }
    printf("请输入%d个整数：",size);
    for(i=0;i<size;i++){
        scanf("%d",&nums[i] );}
    printf("当前数组元素：");
    for(i=0;i<size;i++){
        printf("%d ",nums[i]);}
    printf("\n");
    printf("请输入扩增后的数组大小:");
    scanf("%d",&newsize);
    int *newnums=(int*)realloc(nums,newsize*sizeof(int));
    if(newnums==NULL)
    {
        printf("内存分配失败！");
        return 1;
    }
    printf("扩增后的数组元素：");
    for(i=0;i<newsize;i++){
        printf("%d ",newnums[i]);}
    printf("\n");
    free(newnums);//释放扩增后的内存
    free(nums);//释放原始内存
    return 0;
}