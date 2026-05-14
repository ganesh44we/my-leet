class Solution {
public:
    int maxScore(string s) {
        int ones = 0;

        // count total 1s
        for(char c : s){
            if(c == '1') ones++;
        }

        int zeros = 0;
        int ans = 0;

        // try all splits except last index
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == '0') zeros++;
            else ones--;

            ans = max(ans, zeros + ones);
        }

        return ans;
    }
};
