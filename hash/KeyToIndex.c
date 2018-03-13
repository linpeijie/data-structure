#include"def.h"

int keyToIndex(char* key){
    int index, len, i;

    if(key == NULL)
        return -1;

    len = strlen(key);
    index = (int)key[0];

    for(i = 0; i < len; i++)
        index *= 1103515245 + (int)key[i];

    index >>= 27;
    
    index &= (LINKED_LENGTH - 1);

    return index;
} 

