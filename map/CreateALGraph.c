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
        
        pe = (ArcNode*)malloc(sizeof(ArcNode));             //创建边表
        pe->adjvex = j;
        pe->weight = w;
        pe->next = G->adjList[i].first;
        G->adjList[i].first = pe;

        pe = (ArcNode*)malloc(sizeof(ArcNode));             //无向图是对称的，所以i，j两个结点指向对方
        pe->adjvex = i;
        pe->weight = w;
        pe->next = G->adjList[j].first;
        G->adjList[j].first = pe;
    }
}
