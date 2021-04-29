class Solution
{
    public:
    bool isbst(Node* root,Node* min=NULL,Node* max=NULL)
    {
        if(root==NULL)
            return true;
        if(min != NULL && root->data <= min->data)
            return false;
        if(max != NULL && root->data >=max->data)
            return false;
        
        bool leftValid=isbst(root->left,min,root);
        bool rightValid = isbst(root->right,root,max);
        
        return leftValid and rightValid;
    }
    bool isBST(Node* root) 
    {
        // Your code here
        if(isbst(root,NULL,NULL))
            return true;
        return false;
    }
};
