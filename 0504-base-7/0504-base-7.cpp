class Solution {
public:
    string convertToBase7(int num) {
       string s;
       if(num==0) return "0";
        int n=abs(num);
      while(n>0)
      {
          int l=n%7;
            n=n/7;
        s+=to_string(l);
      }
    if(num<0) s+="-";
    reverse(s.begin(),s.end());
      return s;
    }
};