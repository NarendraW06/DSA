class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0)
            {
                int ld=nums[i]%10;
                nums[i]=nums[i]/10;
                if(ld==digit)
                {
                    cnt++;
                }
            }
        }
        return cnt;

    }
};