#include"def.h"

int tree_depth(BiTree T){
    int ld=0,rd=0;

    if(T==NULL)
        return 0;
   
    ld = tree_depth(T->lchild);
    rd = tree_depth(T->rchild);

    return ld>rd ? ld+1 : rd+1;
}
