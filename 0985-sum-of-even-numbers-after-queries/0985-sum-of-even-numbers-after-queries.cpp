class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<queries.size();i++)
        {   sum=0;
            int a=queries[i][1];
             nums[a]+=queries[i][0];
             for(int j=0;j<nums.size();j++)
             {
                if(nums[j]%2==0)
                {
                    sum+=nums[j];
                }
             }
             v.push_back(sum);
            
        }
        return v;
    }
};