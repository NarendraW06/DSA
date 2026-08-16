class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> b;
        int p=0,l=false;
        for(int i=0;i<nums1.size();i++)
        {   l=false;
            for(int j=0 ; j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                   for(p=0;p<b.size();p++)
                   {    
                    if(nums1[i]==b[p])
                    {
                        l=true;
                    }

                   }
                   if(l==false)
                    {
                              b.push_back(nums1[i]);
                        
                    }
                }
            }
        }
        
        return b;
    }
};