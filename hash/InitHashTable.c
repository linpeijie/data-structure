#include"def.h"

void initHashTable(HashTable* table){
    //Init the hash table

    int i;
    if(table == NULL)
        return ;

    for(i = 0; i < LINKED_LENGTH; i++){
        table -> linked[i].key = NULL;
        table -> linked[i].value = NULL;
        table -> linked[i].next = NULL;
    }
}
