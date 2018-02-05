
bool init_tree(BiTree T);
bool destroy_tree(BiTree* T);
bool create_tree(BiTree* T,char definition[]);
bool clear_tree(BiTree* T);
bool tree_empty(BiTree T);
bool print_tree(BiTree T,char ch[]);
int tree_depth(BiTree T);
BiTNode root(BiTree T,BiTNode* r);
BiTNode* parent(BiTree T,BiTNode p);

bool bst_insert(BiTree* T,char e);
bool create_bst(BiTree* T);
BiTNode* bst_search(BiTree T,char ch); 
