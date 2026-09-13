class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> n;

        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());

        for (int i = min; i <= max; i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                n.push_back(i);
            }
        }

        return n;
    }
};