#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LINKED_LENGTH 50

typedef struct HashNode{
    char* key;
    char* value;
    struct HashNode* next;
}HashNode;

//use linked way to deal with conflict
typedef struct HashTable{    

    HashNode linked[LINKED_LENGTH]; // table linked

}HashTable;
