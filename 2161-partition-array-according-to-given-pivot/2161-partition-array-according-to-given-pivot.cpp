class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v(nums.size());

        int j = 0;
        int s = 0;
        int k = nums.size() - 1;

        // Find starting position of pivot elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot)
                s++;
        }

        int pivotStart = s;
        s = pivotStart;

        // Place elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                v[j] = nums[i];
                j++;
            }
            else if (nums[i] == pivot) {
                v[s] = nums[i];
                s++;
            }
        }

        // Place elements greater than pivot from right
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                v[k] = nums[i];
                k--;
            }
        }

        return v;
    }
};