#include"def.h"

void createALGraph(ALGraph *G){
    int i,j,k,w;

    ArcNode *pe;

    printf("Enter vexNum & arcNum:");
    scanf("%d%d",&G->vexNum,&G->arcNum);

    printf("Enter the vertex:");
    for(i = 0; i < G->vexNum; i++){
        scanf("%d",&G->adjList[i].data);
        G->adjList[i].first = NULL;
    }

    printf("Enter (vi,vj) & weight:\n");
    for(k = 0; k < G->arcNum; k++){
        scanf("%d%d%d",&i,&j,&w);
        
        pe = (ArcNode*)malloc(sizeof(ArcNode));
        pe->adjvex = j;
        pe->next = G->adjList[i].first;
        G->adjList[i].first = pe;

        pe = (ArcNode*)malloc(sizeof(ArcNode));
        pe->adjvex = i;
        pe->next = G->adjList[j].first;
        G->adjList[j].first = pe;
    }
}
