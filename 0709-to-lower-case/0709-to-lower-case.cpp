class Solution {
public:
    string toLowerCase(string s) {
        
        string v;
        for(int i=0;i<s.size();i++)
        {   
            if(s[i] >= 'A' && s[i] <= 'Z')
                {
                  v.push_back(s[i]+32);
                }
                else{
                   v.push_back(s[i]);
                }
        }
        return v;
    }
};