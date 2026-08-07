class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
            int k=0;
            int y=x;
         while(x>0)
         {
             
            k+=x%10;
            x=x/10;

         }
         if(y%k==0)
         {
            return k;
         }
         
         return -1;

    }
};