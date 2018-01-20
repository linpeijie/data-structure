#ifndef extern_h
#define extern_h

bool init_list_seq(Seqlist *L);    //create a empty list
bool init_list_sq(Sqlist *L);     //create a empty list
bool clearlist(Seqlist *L);       //make the list empty
bool destroylist(Seqlist *L);    //destroy list
bool list_empty(Seqlist L);      //if list is empty,return true,else return false

#endif 
