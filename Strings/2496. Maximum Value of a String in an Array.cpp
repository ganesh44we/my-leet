class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans = 0;

        for(string s : strs) {
            bool digit = true;

            for(char ch : s) {
                if(!isdigit(ch)) {
                    digit = false;
                    break;
                }
            }

            if(digit)
                ans = max(ans, stoi(s));
            else
                ans = max(ans, (int)s.size());
        }

        return ans;
    }
};
