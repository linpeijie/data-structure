#include"def.h"

BiTNode* bst_search(BiTree T,char ch){

    while(T!=NULL && T->elem!=ch){

        if(ch < T->elem) 
            T = T->lchild;
        else
            T = T->rchild;
    }

    
    return T;
}
