#define MAXSIZE 100

typedef struct{
    int data[MaxSize];
    int length;
}Sqlist;

typedef struct{
    int *data;
    int maxsize,length;
}Seqlist;
