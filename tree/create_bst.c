#include"def.h"

bool create_bst(BiTree* T){
    (*T)=NULL;
    char ch;

    printf("enter new elem,end with '#':");
    while(scanf("%c",&ch)!=EOF && (ch!='#')){

        getchar();
        bst_insert(&(*T),ch);
    }

    return true;
}
