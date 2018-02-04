#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct BiTNode{
    char elem;
    struct BiTNode* lchild;
    struct BiTNode* rchild;
}BiTNode,*BiTree;
