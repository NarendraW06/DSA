class Solution {
public:
    int lengthOfLastWord(string s) {
     
        int cnt=0;
       int l= s.length();
       l=l-1;

       while( l>=0 &&s[l]==' ')
       {
        l--;
       }

       while( l>=0 && s[l]!=' '  )
       {
        cnt++;
        l--;
       }
       
    return cnt;
    }
};