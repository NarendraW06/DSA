class Solution {
public:
    int fib(int n) {
        int r,a=0,b=1;
        if(n==0) return 0;
        if(n==1) return 1; 
        if(n>1)
        {   
            for(int i=2;i<=n;i++)
            {
                r=a+b;
                a=b;
                b=r;

            }
            
        }
        return r;
    }
};