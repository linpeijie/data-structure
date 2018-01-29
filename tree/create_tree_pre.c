#include<stdio.h>
#include"def.h"
/* 这里因为用了字符变量，所以一定要用 getchar()吸收掉多余的'\n'字符，不然会发生错误*/

bool create_tree_pre(BiTree* T){
    char ch;
    
    scanf("%c",&ch);
    getchar();                            //absorb redundant symbols
    
    if(ch == '#'){
        (*T) = NULL;
    }    
    else{
        if(!((*T) = (BiTNode*)malloc(sizeof(BiTNode))))
            exit(0);
        (*T)->elem = ch;
        
        printf("enter lchild:\n");
        create_tree_pre(&((*T)->lchild));
        printf("enter rchild:\n");
        create_tree_pre(&((*T)->rchild));
    }
    return true; 
}
