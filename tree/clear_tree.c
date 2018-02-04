#include<stdio.h>
#include"def.h"

bool clear_tree(BiTree* T){

    if((*T)!=NULL){
        clear_tree(&((*T)->lchild));
        clear_tree(&((*T)->rchild));
        (*T)=NULL;
    }

    return true;
}
