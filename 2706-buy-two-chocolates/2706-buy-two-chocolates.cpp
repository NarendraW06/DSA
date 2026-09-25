class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum=0;
        for(int i=0;i<2;i++)
        {
            sum+=prices[i];
        }
        if(sum>money) return money;
        else 
        {
            return money-sum;
        }
        return 0;
    }
};