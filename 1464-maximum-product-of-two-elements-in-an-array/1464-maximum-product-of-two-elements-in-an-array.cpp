class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int lar=0;
        int slar=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>lar)
            {
                slar=lar;
                lar=nums[i];

            }
            else if(nums[i]>slar)
            {   
                slar=nums[i];
            }
            
        }
       int l=lar-1;
        int s=slar-1;
        return l*s;
    }
};