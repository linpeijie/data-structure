#include<stdio.h>
#include"def.h"

bool init_tree(BiTree T){
    T = (BiTree)malloc(sizeof(BiTNode));

    if(!T)
        exit(0);

    T->lchild = NULL;
    T->rchild = NULL;

    return true;
}
