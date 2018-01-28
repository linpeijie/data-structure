#include<stdio.h>
#include"def.h"

bool en_queue(LinkQueue* Q,int e){
    QueuePtr p;
    
    p = (QNode*)malloc(sizeof(QNode));
    
    if(!p)
        exit(0);

    p->data = e;

    p->next = NULL;

    Q->rear->next = p;

    Q->rear = p;

    return true;
}
