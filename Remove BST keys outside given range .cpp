Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root==NULL)
            return NULL;
            
        root->left = removekeys(root->left,l,r);
        root->right = removekeys(root->right,l,r);
        
        if(root->data <l){
            Node *rchild = root->right;
            delete root;
            return rchild;
        }
        if(root->data > r){
            Node *lchild = root->left;
            delete root;
            return lchild;
        }
        return root;
    }
