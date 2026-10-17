class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            int temp = nums[i];

            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }

            v.push_back({sum, nums[i], i});
        }

        sort(v.begin(), v.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || v[i][2] == i) {
                continue;
            }

            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = v[j][2];
                cycleSize++;
            }

            if (cycleSize > 1) {
                swaps += cycleSize - 1;
            }
        }

        return swaps;
    }
};