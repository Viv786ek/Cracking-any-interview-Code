class Solution
{
    public:
 void inorder(Node *root,int k,int &n,int &ans)
{
if(root==NULL || n>=k)
return;
inorder(root->right,k,n,ans);
n++;
if(k==n)
{
ans=root->data;
return;
}
inorder(root->left,k,n,ans);

}
    int kthLargest(Node *root, int K)
    {
        //Your code here
       int n=0;
int ans;
inorder(root,K,n,ans);
return ans;
    }
};
