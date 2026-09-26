class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sume=0;
        int sumo=0;
        int cnte=0,cnto=0;
        int i=1;
        while(cnte!=n && cnto!=n)
        {   
        
            if(i%2==0)
            {
                sume+=i;
                cnte++;
            }
            else
            {
                sumo+=i;
                cnto++;
            }
            i++;
        }
        return gcd(sume, sumo);
    }
};