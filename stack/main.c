#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    SqStack s;
    int e;

    init_stack(&s);

    int n=3;
    while(n--){
        printf("enter a elem:");
        scanf("%d",&e);
        push(&s,e);
    }

    get_top(s,&e);
    printf("\n%d",e);

    printf("\n%d",stack_length(s));

    destroy_stack(&s);
    printf("\n%d",s.stacksize);

    return 0;
}
