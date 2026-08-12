class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int ld;
        int cnt=0;
        while(n>0)
        {
            ld=n%10;
            if(num%ld==0)
            {
                cnt++;
            }
            n=n/10;
        }
        return cnt;
    }
};