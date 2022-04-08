//
// Created by syutung on 2022/4/9.
//
#include <stdio.h>
#include "../package/myseqlist.h"
#include <malloc.h>
#include<stdbool.h>

/***
 * 从顺序表中删除具有最小数值的元素（假设唯一），并且由函数返回其数值，
 * 空出的位置由最后一个替补，若顺序表为空，则显示出错信息并结束程序
 * @param seqList1 顺序表
 * @return 最小数值的元素
 */
int deleteMinNumber(seqList* seqList1){
    if (seqList1->length==0){
        printf("The List is Null!\n");
        return -999999;
    }
    int minNumber = seqList1->data[0];
    int minNumberIndex = 0;
    for (int i = 1; i < seqList1->length; i++) {
        if(seqList1->data[i]<minNumber){
            minNumber=seqList1->data[i];
            minNumberIndex=i;
        }
    }
    seqList1->data[minNumberIndex]=seqList1->data[seqList1->length-1];
    return minNumber;
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

    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n删除的最小数值:%d\n", deleteMinNumber(list));
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
}

