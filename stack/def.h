#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef struct SqStack{
    int* base;
    int* top;
    int stacksize;
}SqStack;
