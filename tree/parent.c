#include"def.h"

BiTNode* parent(BiTree T,BiTNode p){

    if(T){    
        if(T->lchild && T->lchild->elem == p.elem){
            printf("parent:%c\n",T->elem);
            return T;
        }
        if(T->rchild && T->rchild->elem == p.elem){
            printf("parent:%c\n",T->elem);
            return T;
        }

        parent(T->lchild,p);
        parent(T->rchild,p);
    }
}
