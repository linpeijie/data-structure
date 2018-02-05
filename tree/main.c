#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    BiTNode r;
    char ch[10];
    char e;
    
    printf("choose pre,in or post:");
    scanf("%s",ch);
    getchar();

    printf("create a tree:\n");  
    create_tree(&T,ch);
    
    r.elem = '3';
    parent(T,r);

    destroy_tree(&T);
 
    return 0;
}
