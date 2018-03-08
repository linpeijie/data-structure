#include"def.h"

int weightPathLength(BiTree T,int len){

    if(T==NULL)
        return 0;
    else{
        if(T->lchild == NULL && T->rchild == NULL ){
            printf("%d*%d+",T->elem,len);    
            return T->elem * len;
        } else {
            return weightPathLength(T->lchild,len+1) + weightPathLength(T->rchild,len+1);
        }
    }
}
