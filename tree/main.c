#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    char ch;
    
    create_bst(&T);

    print_tree(T,"in");
    getchar();

    printf("\nenter search elem:");
    scanf("%c",&ch);


    if(bst_search(T,ch))
        printf("exit!");
    else
        printf("Don't exit!");

    destroy_tree(&T);
 
    return 0;
}
