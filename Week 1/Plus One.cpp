class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size() - 1;
        digits[index]++;
        
        while(digits[index] == 10 && index > 1)
        {
            digits[index] = 0;
            digits[index - 1]++;
            index--;
        }

        if(index == 1)
        {
            if(digits[1] == 10)
            {
                digits[1] = 0;
                digits[0]++;
            }
        }
        if(digits[0] == 10)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
