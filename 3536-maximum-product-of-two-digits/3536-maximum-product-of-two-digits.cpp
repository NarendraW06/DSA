class Solution {
public:
    int maxProduct(int n) {
        int pro=1;
        int lar=0;
        int slar;
        while(n>0)
        {
            int ld=n%10;
            n=n/10;
            if(ld>lar)
            {
                slar=lar;
                lar=ld;
            }
             else if (ld > slar) {
                slar = ld;
            }

        }
        return lar*slar;
    }
};