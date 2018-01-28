#include<stdio.h>
#include"def.h"

bool init_queue(LinkQueue* Q){
    Q->front = Q->rear = (QNode*)malloc(sizeof(QNode));


    if(!Q->front)
        exit(0);

    Q->front->next = NULL;

    return true;    
}
