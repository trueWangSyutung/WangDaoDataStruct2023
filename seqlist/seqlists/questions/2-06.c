//
// Created by syutung on 2022/4/9.
// Warning: The code could be too easy, if you have the better answer, welcome you to send issues
//
#include <stdio.h>
#include "../package/myseqlist.h"
#include <malloc.h>
#include "math.h"
/***
 * 设计高效算法，删除顺序表 L（长度为 n）中有重复值的元素.
 * @param seqList1 顺序表
 * @return 是否成功
 *
 */
bool removeRepeatNumber(seqList* l){
    if (l->length==0 ){
        printf("The List is Null!\n");
        return false;
    }
    for (int i = 0; i < l->length; i++) { // 第一遍遍历
        int sum = 0;  // 后面有多少一样的？
        for (int j = i+1; j < l->length; j++) {  // 与后面元素逐一比较
            if (l->data[i]==l->data[j]){  // 如果相等，sum+1
                sum++;
            }else{  // 不相等的话，就把这数向前移动
                l->data[j-sum]=l->data[j];
            }
        }  // 让列表总长度减去sum
        l->length-=sum;
    }
    return true;
}

void main(){
    seqList* list = malloc(sizeof(seqList));
    ListInit(list);
    ListInsert(list,1);
    ListInsert(list,2);
    ListInsert(list,8);
    ListInsert(list,7);
    ListInsert(list,7);
    ListInsert(list,7);
    ListInsert(list,3);
    ListInsert(list,3);
    ListInsert(list,2);
    ListInsert(list,9);
    ListInsert(list,5);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n");
    removeRepeatNumber(list);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
}

