#include<stdio.h>
#include"def.h"

bool create_tree_pre(BiTree* T){
    char ch;

    scanf("%c",&ch);
    if(ch == ' ')
        (*T) = NULL;
    else{
        (*T) = (BiTNode*)malloc(sizeof(BiTNode));
        (*T)->elem = (ch - '0');
        create_tree_pre(&((*T)->lchild));
        create_tree_pre(&((*T)->rchild));
    }

    return true;
}
