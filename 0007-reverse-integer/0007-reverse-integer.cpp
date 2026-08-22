class Solution {
public:
    int reverse(int x) {
        long  MIN = -2147483648;
        long MAX =  2147483647;
        
        long long  ld=0;
        long long rev=0;
        long long  n=x;
        

       while(x!=0)
       {
            ld=x%10;
            x=x/10;
            rev=rev*10+ld;
       } 
       if(rev>MAX || rev<MIN) return 0;
       
    return rev;
    }
};