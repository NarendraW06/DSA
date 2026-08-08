class Solution {
public:
    int subtractProductAndSum(int n) {
        int i=1,j=0;
        while(n>0)
        {
            
            i*=n%10;
            j+=n%10;
            n=n/10;
        }
        int r=0;
        r=i-j;
        return r;
        
    }
};