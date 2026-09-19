class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==-nums[j])
                {
                    v.push_back(nums[i]);
                }
            }
        }
        if(v.empty())
{
    return -1;
}
       int max=*max_element(v.begin(),v.end());
        return max;
    }
};