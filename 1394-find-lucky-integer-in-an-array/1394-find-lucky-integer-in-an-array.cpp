class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;

        for(int i = 0; i < arr.size(); i++)
        {
            int n = arr[i];
            int cnt = 0;

            for(int j = 0; j < arr.size(); j++)
            {
                if(arr[j] == n)
                {
                    cnt++;
                }
            }

            if(cnt == n)
            {
                ans = max(ans, n);
            }
        }

        return ans;
    }
};