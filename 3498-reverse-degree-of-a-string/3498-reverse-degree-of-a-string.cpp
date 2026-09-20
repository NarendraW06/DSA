class Solution {
public:
    int reverseDegree(string s) {
        int pro=0;
        for(int i=0;i<s.size();i++)
        {
            int  temp=s[i] - 'a' + 1;
            int rev=26 - temp + 1;
            pro+=(i+1)*rev;
        }
        return pro;
    }
};