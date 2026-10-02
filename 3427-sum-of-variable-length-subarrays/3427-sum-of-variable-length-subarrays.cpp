class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
       for(int i=0;i<nums.size();i++)
       {
          int str=max(0,i-nums[i]);
       

       for(int j=str;j<=i;j++)
       {
            sum+=nums[j];
       }
       }
       return sum;
    }
};