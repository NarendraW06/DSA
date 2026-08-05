class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        l=l-1;
        
        while(l>=0)
        {
            if(digits[l]<9)
            {
                digits[l]=digits[l]+1;
                return digits;
            }
            else
            {
                digits[l]=0;
                l--;
            }

        }
        digits.insert(digits.begin(), 1);


        return digits;
    }
    
};