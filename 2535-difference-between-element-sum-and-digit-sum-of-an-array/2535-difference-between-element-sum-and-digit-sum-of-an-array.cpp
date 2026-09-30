class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,lsum=0;
        
        for(int i=0;i<nums.size();i++)
        {
             sum+=nums[i];
             while(nums[i]>0)
             {
                int ld=nums[i]%10;
                nums[i]=nums[i]/10;
                lsum+=ld;
             }
        }
        return sum-lsum;
    }
};