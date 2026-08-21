class Solution {
public:
    bool isHappy(int n) {
        
        int ld=0;
        int sum =0;
        set<int> s;

        while(n > 0)
        {
            if(s.count(n))
                return false;

            s.insert(n);

        while(n>0)
        {
            ld=n%10;
            n=n/10;
            sum+=ld*ld;
        }
             if(sum==1) return true;
            
            
                n=sum;
                sum=0;
            
        }    
           
        
        return false;
    }
};