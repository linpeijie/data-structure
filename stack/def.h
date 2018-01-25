#include<stdlib.h>
#include<stdbool.h>

typedef struct LinkStack{
    int elem;
    struct LinkStack *next;
}*LinkStack;
