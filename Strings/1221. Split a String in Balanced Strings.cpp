class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0;
        int count = 0;

        for(char ch : s) {
            if(ch == 'L')
                l++;
            else
                r++;

            // found one balanced substring
            if(l == r)
                count++;
        }

        return count;
    }
};
