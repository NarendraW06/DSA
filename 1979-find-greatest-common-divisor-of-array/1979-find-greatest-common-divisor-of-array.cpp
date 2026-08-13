class Solution {
public:
    int findGCD(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());

        for(int i=1;i<=min;i++)
        {
            if(min%i==0)
            {
                a.push_back(i);
            }
            if(max%i==0)
            {
                b.push_back(i);
            }
        }

        int s=a.size()-1;
        int d=b.size()-1;

        for(int i=s;i>=0;i--)
        {
            for(int j=d;j>=0;j--)
            {
                if(a[i]==b[j])
                {
                    return a[i];
                }
            }
        }

        return 0;
    }
};