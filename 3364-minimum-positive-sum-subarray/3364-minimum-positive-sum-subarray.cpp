
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        for (int k = l; k <= r; k++) {
            int sum = 0;

            // Calculate the first window
            for (int i = 0; i < k; i++) {
                sum += nums[i];
            }

            if (sum > 0) {
                ans = min(ans, sum);
            }

            // Slide the window
            for (int i = k; i < nums.size(); i++) {
                sum -= nums[i - k];
                sum += nums[i];

                if (sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
