//
// Created by syutung on 2022/4/9.
//
#include <stdio.h>
#include "../package/myseqlist.h"
#include <malloc.h>
/***
 * 设计高效算法，删除顺序表 L（长度为 n）中所有数值为在s和t
 * （包括s和t,s<t）之间的元素，若t不合理则结束程序
 * @param l 顺序表
 * @param s 下界
 * @param t 上界
 * @return 是否成功
 */
bool removeNumberXinSTOfList(seqList* l,int s,int t){
    if (l->length==0 || s >= t){
        printf("The List is Null!\n");
        return false;
    }
    int sum_del_length = 0;
    for (int i = 0; i < l->length; i++) {
       // 遍历数组
       if (l->data[i] >= s && l->data[i] <= t) // 当前这一位和x相等
       {
           sum_del_length++;
       }else{  // 不相等的情况
           l->data[i-sum_del_length]=l->data[i];
           if(sum_del_length!=0){
               l->data[i]=NULL;
           }
       }
    }

    l->length-=sum_del_length;
    return true;
}

void main(){
    seqList* list = malloc(sizeof(seqList));
    ListInit(list);
    ListInsert(list,7);
    ListInsert(list,7);
    ListInsert(list,4);
    ListInsert(list,5);
    ListInsert(list,7);
    ListInsert(list,7);
    ListInsert(list,9);
    ListInsert(list,8);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
    printf("\n");
    removeNumberXinSTOfList(list,4,7);
    for (int i = 0; i < list->length; i++)
    {
        printf("%d\t",list->data[i]);
    }
}

