class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=0;
        n=sqrt(c);
        long long  i=0,j=n;
        while(i<=j)
        {
           long long  s= (i*i)+(j*j);
          
           if (s == c)
                return true;
            else if (s > c)
                j--;
            else
                i++;
        }
        return false;
    }
};