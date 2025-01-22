class Solution {
public:
    int mySqrt(int x) {
        double index = 1;

        while(index * index <= x)
        {
            if(index * index == x) return index;
            index++;
        }
        index--;

        return index;
    }
};
