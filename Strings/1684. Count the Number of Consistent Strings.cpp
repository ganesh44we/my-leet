class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;

        for(auto &word : words){
            bool ok = true;

            for(char c : word){
                // If character not found in allowed string
                if(allowed.find(c) == string::npos){
                    ok = false;
                    break;
                }
            }

            if(ok) ans++;
        }

        return ans;
    }
};
