class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> v;

        for (int a = 1; a < n; a++) {
            int b = n - a;

            if (to_string(a).find('0') == string::npos &&
                to_string(b).find('0') == string::npos) {
                v.push_back(a);
                v.push_back(b);
                return v;
            }
        }

        return v;
    }
};