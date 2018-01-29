#include<stdio.h>
#include"def.h"

bool create_tree_pre(BiTree* T){
    char ch;
    
    scanf("%c",&ch);
    getchar();                  //absorb redundant symbols
    
    if(ch == '#'){
        (*T) = NULL;
    }    
    else{
        if(!((*T) = (BiTNode*)malloc(sizeof(BiTNode))))
            exit(0);
        (*T)->elem = ch;

        printf("lchild:%c\n",(*T)->elem);
        create_tree_pre(&((*T)->lchild));
        printf("rchild:%c\n",(*T)->elem);
        create_tree_pre(&((*T)->rchild));
    }
    return true; 
}
