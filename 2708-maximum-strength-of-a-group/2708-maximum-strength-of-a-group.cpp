class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums.size() == 1)
            return nums[0];

        long long sum = 1;
        int cnt = 0;
        int lastNegative = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                cnt++;
                lastNegative = i;
            }
        }

        bool selected = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                sum *= nums[i];
                selected = true;
            }
            else if (nums[i] < 0) {
                if (cnt % 2 == 0 || i != lastNegative) {
                    sum *= nums[i];
                    selected = true;
                }
            }
        }

        if (!selected)
            return 0;

        return sum;
    }
};