#include"def.h"

BiTNode* CreateHuffman(char a[],int n){
    int i,j,min,secendMin;
    BiTNode **b,*q;
    b = malloc(n*sizeof(BiTNode));

    for(i=0;i<n;i++){
        b[i] = (BiTNode*)malloc(sizeof(BiTNode));
        b[i]->elem = a[i];
        b[i]->lchild=b[i]->rchild=NULL;
    }

    for(i=1; i<n; i++) {
        min=-1;

        for(j=0; j<n; j++) {
            if(b[j] != NULL && min==-1) {
                min = j;
                continue;
            }
            if(b[j] != NULL) {
                secendMin = j;
                break;
            }
        }
    

        for(j = secendMin; j < n; j++) {
            if(b[j] != NULL) {
                if(b[j]->elem < b[min]->elem) {
                    secendMin = min;
                    min = j;
                } else if(b[j]->elem < b[secendMin]->elem) {
                    secendMin = j;
                }
            }
        }

        q = (BiTNode*)malloc(sizeof(BiTNode));
        q->elem = b[min]->elem + b[secendMin]->elem;
        q->lchild = b[min];
        q->rchild = b[secendMin];
        
        b[min] = q;
        b[secendMin] = NULL;
    }
    
    free(b);
    return q;
}
