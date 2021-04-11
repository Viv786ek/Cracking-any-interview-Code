
class Solution{
  public:
    // Complete this function
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int arr[256] = {0};
		for(int i=0;i<s.size();i++){
		  arr[s[i]]++;
		}
		for(int i = 0; i < s.length(); i++){
		  if(arr[s[i]] == 1){
		    return s[i];
		    break;
		  }
		}
		return '$';
       
    }

};
