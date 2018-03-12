#include"def.h"

void destroyHashTable(HashTable* table){
    int i;
    HashNode* e;  //present node
    HashNode* ep;

    if(table == NULL)
        return ;
    
    for(i = 0; i < LINKED_LENGTH; i++){
        e = &(table->linked[i]);
        
        while(e->next != NULL){   //destroy present node
            ep = e->next;
            e = ep->next;
            free(ep->key);
            free(ep->value);
            free(ep);
        }
    }
}
