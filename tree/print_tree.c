#include"def.h"

bool print_tree(BiTree T,char ch[]){

    if(!strcmp(ch,"pre")){
    /* use 'pre order traverse' print the tree*/
        if(T!=NULL){
            printf("%c ",T->elem);
            print_tree(T->lchild,ch);
            print_tree(T->rchild,ch);
       }
    }

    else if(!strcmp(ch,"in")){
    /*use 'in order traverse' print the tree*/
        if(T!=NULL){
            print_tree(T->lchild,ch);
            printf("%c ",T->elem);
            print_tree(T->rchild,ch);
        }
    }

    else if(!strcmp(ch,"post")){
    /*use 'post order traverse' print the tree*/
        if(T!=NULL){
            print_tree(T->lchild,ch);
            print_tree(T->rchild,ch);
            printf("%c ",T->elem);
        }
    }

    else if(!strcmp(ch,"level")){}

    return true;
}
