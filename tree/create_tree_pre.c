#include<stdio.h>
#include"def.h"

bool create_tree_pre(BiTree* T){
    char ch;

    printf("enter a elem:");
    
    scanf("%c",&ch);
    
    if(ch == '#'){
        (*T) = NULL;
    }    
    
    if((*T)!=NULL){
        if(!((*T) = (BiTNode*)malloc(sizeof(BiTNode))))
            exit(0);
        (*T)->elem = ch;
        create_tree_pre(&((*T)->lchild));
        printf("1\n");
        create_tree_pre(&((*T)->rchild));
    }
    return true; 
}
