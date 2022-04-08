#include <stdio.h>
#include "./package/myseqlist.h"
#include <malloc.h>  
#include<stdbool.h>

// 用于测试列表功能是否正常
int main(){
    seqList* list = malloc(sizeof(seqList));
    ListInit(list);
    ListInsert(list,1);
    ListInsert(list,2);
    ListInsert(list,4);
    ListInsert(list,5);
    ListInsert(list,3);
    ListInsert(list,7);
    ListInsert(list,9);
    ListInsert(list,1);
    ListInsert(list,2);
    ListInsert(list,4);
    ListInsert(list,5);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n%d\n",ListFindByNum(list,5));
    ListInsertByIndex(list,999,5);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n%d\n",ListFindByNum(list,5));
    ListDelete(list,3);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    ListRelease(list);
    getchar();
    return 0;
  

}