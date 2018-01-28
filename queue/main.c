#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    LinkQueue Q;
    int e;

    init_queue(&Q);

    printf("enter a elem:");
    scanf("%d",&e);

    en_queue(&Q,e);

    printf("length:%d\n",queue_length(Q));

    de_queue(&Q,&e);
    printf("delete:%d\n",e);

    clear_queue(&Q);
    if(queue_empty(Q))
        printf("The queue is empty\n");
 
    destroy_queue(&Q);
 
    return 0;
}
