//
// Created by syutung on 2022/4/9.
// Warning: The code could be too easy, if you have the better answer, welcome you to send issues
//
#include <stdio.h>
#include "../package/myseqlist.h"
#include <malloc.h>
#include "math.h"
/***
 * 将两个有序顺序表合成一个.
 * @param l1 有序顺序表1
 * @param l2 有序顺序表2
 * @return 是否成功
 *
 */
seqList* combineSeqList(seqList* l1,seqList* l2){
    // 待定
}

void main(){
    seqList* list = malloc(sizeof(seqList));
    ListInit(list);
    ListInsert(list,2);
    ListInsert(list,2);
    ListInsert(list,3);
    ListInsert(list,4);
    ListInsert(list,4);
    ListInsert(list,4);
    seqList* l2 = malloc(sizeof(seqList));
    ListInit(l2);
    ListInsert(l2,1);
    ListInsert(l2,6);
    ListInsert(l2,6);
    ListInsert(l2,8);
    ListInsert(l2,8);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n");
    for (int i = 0; i < l2->length; i++)
    {
        printf("%d\t",l2->data[i]);
    }
    printf("\n");
    seqList* l3 = combineSeqList(list,l2);
    for (int i = 0; i < l3->length; i++)
    {
        printf("%d\t",l3->data[i]);
    }
    printf("\n");
}

