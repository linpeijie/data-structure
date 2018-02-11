#include"def.h"

bool delete(BiTree* T){
    BiTNode* p;
    BiTNode* q;

    if((*T)->lchild==NULL && (*T)->rchild==NULL)
        free((*T));
    else if((*T)->rchild==NULL)
        (*T) = (*T)->lchild;
    else if((*T)->lchild==NULL)
        (*T) = (*T)->rchild;
    else {
        p = (*T)->rchild;

        while(p->lchild){
            q = p;
            p = p->lchild;
        }

        q->lchild = p->rchild;
        p->lchild = (*T)->lchild;
        p->rchild = (*T)->rchild;
  
        (*T) = p;
        free(p);
        free(q);
    }
        
    return true;
}

bool bst_delete(BiTree* T,char e){
    if(!(*T))
        return false;
    else if(e == (*T)->elem){
        delete(T);
        return true;
    }
    else if(e < (*T)->elem)
        bst_delete(&((*T)->lchild),e);
    else
        bst_delete(&((*T)->rchild),e);

    return true;
}
