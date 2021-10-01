struct BST{
    bool isBST;
    int size,mine,maxe;
};
BST findSize(Node* root){
    BST b;
    if(!root){
        b = {true,0,INT_MAX,INT_MIN};
        return b;
    }
    BST l = findSize(root->left);
    BST r = findSize(root->right);
    
    if(l.isBST && r.isBST && l.maxe < root->data && r.mine > root->data)
        b = {true,1+l.size+r.size, min(l.mine,root->data),max(r.maxe,root->data)};

    else
        b = {false,max(l.size,r.size),-1,-1};
    return b;
}
int largestBst(Node *root)
{
    if(!root)
        return 0;
    struct BST b = findSize(root);
    return b.size;
}
