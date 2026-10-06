class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        return false;
        
        string s;
        int k=0;
       while(n>0)
       {
            int d=n%2;
            n/=2;
           s += char(d + '0');
            k++;
       }

    int j = s.size() - 1;
    int i=0;
    while(i < j)
    {
        if(s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;


    }
};