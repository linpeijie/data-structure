#include<stdio.h>
#include"def.h"

int main(){
    Sqlist L;
    int i;

    for(i=0;i<10;i++)
        L.elem[i] = i;

    for(i=0;i<10;i++)
        printf("%d ",L.elem[i]);
   
    return 0;
}
