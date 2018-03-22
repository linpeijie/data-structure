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

typedef struct{
    VertexType vex[MAXVERTEXNUM];
    EdgeType edge[MAXVERTEXNUM][MAXVERTEXNUM];
    int vexNum,arcNum;
}MGraph;
