
#include <stdio.h>  
#include <malloc.h>  
#include "myseqlist.h"
#include<stdbool.h>



bool ListInit(seqList* list){
    if (list->data==NULL)
    {
        // 还没有初始化
        list->data=(int*)malloc(sizeof(int)*MaxSize);
        list->length=0;
        return true;
    }else{
        // 已经初始化了
        return false;
    }
    
}
bool ListRelease(seqList* list){
    if (list->data==NULL)
    {
        return false;
    }else{
        // 已经初始化了
        free(list->data);
        return true;
    }
    
}
bool ListInsert(seqList* list,int value){
    if (list->data==NULL)
    {
        // the list is not init
        return false;
    }
    if (list->length+1>20)
    {
        // the index is bigger than MaxSize , then should improve the listSize
        int* newList = (int*)malloc(sizeof(int)*(2*list->length));  // look for a new area from RAM
        for (int i=0;i<list->length;i++){
            newList[i]=list->data[i];  // copy oldList to new List
        }
        free(list->data);  // free oldList
        list->data = newList;
    }
    list->data[list->length] = value;
    list->length +=1;
    return true;
}
bool ListInsertByIndex(seqList* list,int value,int index){
    if (list->data==NULL)
    {
        // the list is not init
        return false;
    }
    if (list->length+1>20)
    {
        // the index is bigger than MaxSize , then should improve the listSize
        int* newList = (int*)malloc(sizeof(int)*(2*list->length));  // look for a new area from RAM
        for (int i=0;i<list->length;i++){
            newList[i]=list->data[i];  // copy oldList to new List
        }
        free(list->data);  // free oldList
        list->data = newList;
    }
    list->length +=1;
    for (int i = list->length;i>=index;i--){
        list->data[i] = list->data[i-1];
    }
    list->data[index-1] = value;

    return true;
}

int ListFindByNum(seqList* list, int value){
    if (list->data==NULL)
    {
        // the list is not init
        return -1;
    }
    for (int i = 0; i < list->length; i++)
    {
        if (list->data[i]==value)
        {
            return i;
        }
        
    }
    return -1;
    
}
bool ListDelete(seqList* list, int index){
    if (list->data==NULL)
    {
        // the list is not init
        return false;
    }
    for (int i = index; i < list->length-1; i++)
    {
        list->data[i] = list->data[i+1];
    }
    list->length-=1;
    return true;
    
}
