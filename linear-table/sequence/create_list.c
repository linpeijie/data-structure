#include<stdio.h>
#include"def.h"

Seqlist create_list(Seqlist *L){
    int n=0,e;

    printf("Enter elem,end with '000':");
    scanf("%d",&e);
    
    while(e!=000){
        (*L).elem[n] = e;
        scanf("%d",&e);
        n++;
    }
 
    (*L).length = n;

    return (*L);
}
