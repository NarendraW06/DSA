class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
            j+= nums[i];
           a.push_back(j);
        }
        return a;
    }
};