#include<stdio.h>
#include"def.h"

bool clear_tree(BiTree* T){
    if(!(*T))
       exit(1);

    if((*T)!=NULL){
        clear_tree(&((*T)->lchild));
        clear_tree(&((*T)->rchild));
        free((*T));
    }

    return true;
}
