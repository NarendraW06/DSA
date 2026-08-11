class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> s;
        int i=0;
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0; i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                s.push_back(true);
            }
            else
            {
                s.push_back(false);
            }
        }
        return s;
    }
};