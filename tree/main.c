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

    printf("choose pre,in,post or level to print the tree:");
    scanf("%s",ch);
    getchar();

    print_tree(T,ch);

    destroy_tree(&T);
 
    return 0;
}
