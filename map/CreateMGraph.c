#include"def.h"
/**
* 无向带权图
*/
void createMGraph(MGraph *G){
    int i,j,k,w;

    printf("Enter vexnum and arcnum:");
    scanf("%d%d",&G->vexNum,&G->arcNum);

    printf("Enter the vertex:");
    for(i = 0; i < G->vexNum; i++)
        scanf("%d",&G->vex[i]);

    memset(G->vex,INF,sizeof(G->vex));
    
    printf("Enter (vi,vj) and weight:\n");
    for(k = 0; k < G->arcNum; k++){
        scanf("%d%d%d",&i,&j,&w);
        G->edge[i][j] = w;
        G->edge[j][i] = G->edge[i][j];   //symmetric graph
    }
}
