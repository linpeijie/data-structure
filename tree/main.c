#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    T = (BiTNode*)malloc(sizeof(BiTNode));
   
    create_tree_pre(&T);

    
 
    return 0;
}
