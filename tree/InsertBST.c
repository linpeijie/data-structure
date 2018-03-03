#include"def.h"

bool bst_insert(BiTree* T,char e){
    /*binary sort tree, insert a new elem*/

    if((*T)==NULL){
        (*T) =(BiTree)malloc(sizeof(BiTNode));
        (*T)->elem = e;
        (*T)->lchild = (*T)->rchild = NULL;
        return true;
    }
    else if(e == (*T)->elem)
        return false;
    else if(e < (*T)->elem)
        return bst_insert(&((*T)->lchild),e);
    else
        return bst_insert(&((*T)->rchild),e);

    return true;
}
