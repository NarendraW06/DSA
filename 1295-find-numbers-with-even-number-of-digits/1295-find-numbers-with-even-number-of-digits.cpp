class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
     for(int i=0;i<nums.size();i++)
     {
        int last=nums[i];
        int cnt=0;
         while(last>0)
         {
            cnt++;
            last=last/10;
         }
         if(cnt%2==0)
         {
            c++;
         }
     }   
     return c;
    }
};