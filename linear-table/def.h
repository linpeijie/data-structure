#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#define LIST_INIT_SIZE 100
#define MAXSIZE 100
#define LISTINCREMENT 10

/*
*/

typedef struct{
    int elem[MAXSIZE];
    int length;
}Sqlist;

typedef struct{
    int *elem;
    int listsize,length;
}Seqlist;
