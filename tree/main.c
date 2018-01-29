#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;

    printf("create a tree:\n");  
    create_tree(&T,"pre");

    destroy_tree(&T);
 
    return 0;
}
