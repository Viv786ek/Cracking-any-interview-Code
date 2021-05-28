void findK(struct Node *root,int k,vector<int> &res)
{
    if(root==NULL )
        return;
    if(k==0){
        res.push_back(root->data);
    }
    else{
        findK(root->left,k-1,res);
        findK(root->right,k-1,res);
    }
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int>res;
  findK(root,k,res);
  return res;
}
