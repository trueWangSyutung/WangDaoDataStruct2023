
#ifndef __TEST_H__
#define __TEST_H__
#include<stdbool.h>

#define MaxSize 20
typedef struct seqList{
    int* data;
    int length ;
} seqList;


// 初始化顺序表
/**
 * 初始化顺序表
 * @param list
 * @return 是否成功
 */
bool ListInit(seqList* list);
// 顺序表基本操作 - 在末尾添加一个数目
bool ListInsert(seqList* list,int value);
bool ListInsertByIndex(seqList* list,int value,int index);

// 顺序表基本操作 - 按数值查找
int ListFindByNum(seqList* list, int value);
// 顺序表基本操作 - 删除
bool ListDelete(seqList* list, int index);
// 
bool ListRelease(seqList* list);
#endif







