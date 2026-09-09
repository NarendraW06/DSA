class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int cnt = 0;
        int temp = n;

        // Count total digits
        while (temp > 0) {
            cnt++;
            temp /= 10;
        }

        int pos = 0;

        while (n > 0) {
            int ld = n % 10;
            n = n / 10;
            pos++;

            if (cnt % 2 == 0) {
                if (pos % 2 == 0)
                    sum += ld;
                else
                    sum -= ld;
            }
            else {
                if (pos % 2 == 0)
                    sum -= ld;
                else
                    sum += ld;
            }
        }

        return sum;
    }
};