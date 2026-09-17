class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a;
         int freq=0;
           int can=0;
        for(int i=0;i<nums.size();i++)
        {   
           
           if(freq==0)
           {
            can=nums[i];
        
           }

           if(nums[i]==can)
           {
            freq++;
           }
           else{
            freq--;
           }
        }


return can;
        
    } 
};