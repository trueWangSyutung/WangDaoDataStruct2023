//
// Created by syutung on 2022/4/9.
//
#include <stdio.h>
#include "../package/myseqlist.h"
#include <malloc.h>

/***
 * 设计高效算法，将顺序表来而所有元素逆置，要求空间复杂度O(1)
 * @param seqList1 顺序表
 * @return 是否成功
 */
bool reverseList(seqList* seqList1){
    if (seqList1->length==0){
        printf("The List is Null!\n");
        return false;
    }
    int max = seqList1->length;
    int temp = 0; // 临时数
    for (int i = 0; i <= (max-1)/2; i++) {
        temp = seqList1->data[i];
        seqList1->data[i]=seqList1->data[max-1-i];
        seqList1->data[max-1-i]=temp;
    }
    return true;
}

void main(){
    seqList* list = malloc(sizeof(seqList));
    ListInit(list);
    ListInsert(list,5);
    ListInsert(list,2);
    ListInsert(list,4);
    ListInsert(list,5);
    ListInsert(list,1);
    ListInsert(list,7);
    ListInsert(list,9);
    ListInsert(list,8);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n是否倒置成功:%d\n", reverseList(list));
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
}

