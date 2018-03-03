#include"def.h"

bool delete(BiTree* T){
    /*删除结点*/
    BiTNode* p;                                                 //存放删除结点的右孩子以及寻找其直接后继
    BiTNode* q;                                                 //存放 直接后继的直接前继结点

    if((*T)->lchild==NULL && (*T)->rchild==NULL)                //判断是否有左右孩子结点
        free((*T));
    else if((*T)->rchild==NULL)
        (*T) = (*T)->lchild;
    else if((*T)->lchild==NULL)
        (*T) = (*T)->rchild;
    else {
        /*左右孩子结点均有，用其直接后继替换*/
        p = (*T)->rchild;

        /*寻找直接后继*/
        while(p->lchild){
            q = p;
            p = p->lchild;
        }
        
        /*替换*/
        if(p->lchild!=NULL){
            q->lchild = p->rchild;
            p->lchild = (*T)->lchild;
            p->rchild = (*T)->rchild;
        }
        
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
