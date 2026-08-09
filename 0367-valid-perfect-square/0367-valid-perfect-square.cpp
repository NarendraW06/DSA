class Solution {
public:
    bool isPerfectSquare(int num) {
        int j=num;
        if (num==1) return true;
        num=num/2;
        long long i=0;
        while(i!=j)
        {
           if(i*i==j)
           {
            return true;
            
           } 
           i++;
        }

          return false;
    }
};