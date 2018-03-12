#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    HashTable* table;

    initHashTable(table);
    destroyHashTable(table);

    return 0;
}
