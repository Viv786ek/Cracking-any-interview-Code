class Solution{
    public:
    /*  Function to check if two strings are anagram
    *   a, b: input string
    */
    bool isAnagram(string c, string d){
        
        // Your code here
        if(c.size() != d.size())
            return false;
            
        int count[26]={0};
        for(int i=0;i<c.size();i++){
            count[c[i] - 'a']++;
            count[d[i] - 'a']--;
        }
        
        for(int x : count){
            if(x != 0){
                return false;
            }
        }
        return true;
        
    }












class Solution{
  public:
    bool isAnagram(string c, string d){
    
        // an array of size 26, to store count of characters
        int a[26] = {0};
        
        // storing count of characters in first string
        /// by incrementing the value corresponding to the 
        // array index equal to character number in alphabet(0-25)
        for(int i = 0;i<c.length();i++){
            a[c[i]-'a']++;
        }
    
            // decrementing the count of characters whenever encountered
            // in the second string
            for(int i = 0; i<d.length();i++){
                a[d[i]-'a']--;
            }
    
            bool flag = true;
            
            // iterating over the array in which we stored count
            // to check if count at every index is equal to 0 or not.
            // Count 0 indicates that number of characters in c and d
            // both are same
            for(int i = 0;i<26;i++){
                if(a[i] != 0){
                    flag = false;
                    break;
                }
            }
    
            return flag;
    }

};
