class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
       int sol=0;

       while(n>1)
       {
            sol+=n/2;
            n=(n+1)/2;
       } 
       return sol;
    }
};