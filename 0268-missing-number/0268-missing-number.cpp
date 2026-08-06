class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=nums.size();
        int  sum=s*(s+1)/2;
        int i,j=0;
        for(i=0;i<nums.size();i++)
        {
            j+=nums[i];
        }
       if(sum>j)
       {
            return sum-j;
       }
       return sum-j;
    }
};