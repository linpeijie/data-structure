#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

#define MAXVERTEXNUM 20
#define INF 65535

typedef int VertexType;
typedef int EdgeType;

// MGraph
typedef struct{
    VertexType vex[MAXVERTEXNUM];
    EdgeType edge[MAXVERTEXNUM][MAXVERTEXNUM];
    int vexNum,arcNum;
}MGraph;

//ALGraph
typedef struct ArcNode{
    int adjvex;
    EdgeType weight;
    struct ArcNode *next;
}ArcNode;

typedef struct VNode{
    VertexType data;
    ArcNode *first;
}VNode,AdjList[MAXVERTEXNUM];

typedef struct{
    AdjList adjList;
    int vexNum,arcNum;
}ALGraph;


