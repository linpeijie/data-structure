#ifndef extern_h
#define extern_h

bool init_list_seq(Seqlist *L);    //create a empty list
bool init_list_sq(Sqlist *L);     //create a empty list
bool clearlist(Seqlist *L);       //make the list empty
bool destroylist(Seqlist *L);    //destroy list
bool list_empty(Seqlist L);      //if list is empty,return true,else return false
int get_elem(Seqlist L,int i,int *e);
int locate_elem(Seqlist L,int e,bool compare());
int prior_elem(Seqlist L,int cur_e,int *pre_e);//find the cue_e's prior in L
int next_elem(Seqlist L,int cur_e,int *next_e);//Output the successor of e
bool insert_list(Seqlist *L,int i,int e);    //insert e into location i
bool delete_list(Seqlist *L,int i,int *e);//delete the elem of location i and return it;
Seqlist create_list(Seqlist *L);

#endif 
