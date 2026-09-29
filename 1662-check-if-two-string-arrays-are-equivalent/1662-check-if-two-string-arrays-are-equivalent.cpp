class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",j="";
        int i=0;
      while(i < word1.size() || i < word2.size())
        {      if(i<word1.size()) 
        {
             s+=word1[i];
        }
         if(i<word2.size()) 
          {   j+=word2[i];
          }
             i++;
        }
        if(s==j) return true;
        return false;
    }
};