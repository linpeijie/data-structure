#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    char ch[10];

    
    printf("choose pre,in or post:");
    scanf("%s",ch);
    getchar();

    printf("create a tree:\n");  
    create_tree(&T,ch);

    if(!tree_empty(T))
        printf("Tree is no empty.\n");

    clear_tree(&T);

    if(tree_empty(T))
        printf("Tree is empty.\n");
 
    return 0;
}
