class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=nums.size();
        sort(nums.begin(), nums.end());
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(i!=nums[i])
            {
                return i;
            }
        }
        return i;
    }
};