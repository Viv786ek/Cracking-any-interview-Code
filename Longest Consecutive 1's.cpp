class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int count=0;
        while(N != 0)
        {
            N = (N & (N<<1));
            count++;
        }
        return count;
    }
};


//2nd 
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int count=0,maxy=INT_MIN;
        std:: string binary = std:: bitset<32>(N).to_string();
        for(int i=0;i<binary.length();i++)
        {
            if(binary[i] == '1')
                count++;
            else
                count=0;
                maxy = max(maxy,count);
        }
        return maxy;
    }
};
