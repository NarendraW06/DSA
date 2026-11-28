class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> v = arr;

        sort(arr.begin(), arr.end());

        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        for(int i = 0; i < v.size(); i++)
        {
            v[i] = lower_bound(arr.begin(), arr.end(), v[i]) - arr.begin() + 1;
        }

        return v;
    }
};