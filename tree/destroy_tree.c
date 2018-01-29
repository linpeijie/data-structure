#include<stdio.h>
#include"def.h"

bool destroy_tree(BiTree* T){
    
    if(!(*T)){
        destroy_tree(&((*T)->lchild));
        destroy_tree(&((*T)->rchild));
        free(T);
        return true;
    }
    else
        return true;
}
