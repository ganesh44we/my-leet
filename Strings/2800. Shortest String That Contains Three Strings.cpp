class Solution {
public:
    string merge(string a, string b) {
        if(a.find(b) != string::npos) return a;

        for(int i = min(a.size(), b.size()); i >= 0; i--) {
            if(a.substr(a.size()-i) == b.substr(0,i))
                return a + b.substr(i);
        }
        return a + b;
    }

    string minimumString(string a, string b, string c) {
        vector<string> v = {a,b,c};
        string ans = "";

        sort(v.begin(), v.end());

        do {
            string temp = merge(merge(v[0], v[1]), v[2]);

            if(ans == "" || temp.size() < ans.size() ||
               (temp.size() == ans.size() && temp < ans))
                ans = temp;

        } while(next_permutation(v.begin(), v.end()));

        return ans;
    }
};
