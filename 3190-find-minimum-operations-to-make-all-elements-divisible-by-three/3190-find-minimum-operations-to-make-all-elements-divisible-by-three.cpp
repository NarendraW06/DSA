class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3!=0)
            {
                int temp=nums[i];
                // if((temp-2)%3==0 || (temp+2)%3==0) cnt++;
                // if((temp-1)%3==0 || (temp+1)%3==0) cnt++;
                temp--;
                cnt++;
                if(temp%3!=0) temp--;
                if(temp%3!=0) temp--;

            }
        }
        return cnt;
    }
};