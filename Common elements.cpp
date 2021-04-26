
 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             unordered_map<int,int> mp;
            unordered_set<int> s1;
            unordered_set<int> s2;
            unordered_set<int> s3;
            mp.clear();
            vector<int> ans;
            ans.clear();
            for(int i=0;i<n1;i++)
            {
                s1.insert(A[i]);
            }
          for(int i=0;i<n2;i++){
              s2.insert(B[i]);
          }
          for(int i=0;i<n3;i++){
              s3.insert(C[i]);
          }
          for(auto i:s1){
              mp[i]++;
          }
          for(auto i:s2){
              mp[i]++;
          }
          for(auto i:s3){
              mp[i]++;
          }
          for(auto x:mp){
              if(x.second==3){
                  ans.push_back(x.first);
              }
          }
          if(ans.size()==0){
              return ans;
          }
          sort(ans.begin(),ans.end());
          return ans;
        }

};
