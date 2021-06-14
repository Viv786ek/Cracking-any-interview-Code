class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        return (N<5) ? 0 : N/5 + trailingZeroes(N/5);
    }
};
