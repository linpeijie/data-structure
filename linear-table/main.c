#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    Sqlist L;
    int i;

    init_list_sq(&L);

    for(i=0;i<10;i++){
        L.elem[i] = i;
        printf("%d ",L.elem[i]);
    }
    return 0;
}
