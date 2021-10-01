Node* deleteNode(Node* root, int k) {
    if (root == NULL)
        return root;

    if (root->data > k) {
        root->left = deleteNode(root->left, k);
        return root;
    }
    else if (root->data < k) {
        root->right = deleteNode(root->right, k);
        return root;
    }
 
    // We reach here when root is the node
    // to be deleted.
 
    // If one of the children is empty
    if (root->left == NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
    }
 
    // If both children exist
    else {
 
        Node* succParent = root;
 
        // Find successor
        Node* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
 
        // Delete successor.  Since successor
        // is always left child of its parent
        // we can safely make successor's right
        // right child as left of its parent.
        // If there is no succ, then assign
        // succ->right to succParent->right
        if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
 
        // Copy Successor Data to root
        root->data = succ->data;
 
        // Delete Successor and return root
        delete succ;
        return root;
    }
}
