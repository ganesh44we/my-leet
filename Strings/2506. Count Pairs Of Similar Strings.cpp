class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count = 0;

        for(int i = 0; i < words.size(); i++) {
            string s1 = "";

            // create unique character set for words[i]
            for(char ch : words[i]) {
                if(s1.find(ch) == string::npos)
                    s1 += ch;
            }

            sort(s1.begin(), s1.end());

            for(int j = i + 1; j < words.size(); j++) {
                string s2 = "";

                // create unique character set for words[j]
                for(char ch : words[j]) {
                    if(s2.find(ch) == string::npos)
                        s2 += ch;
                }

                sort(s2.begin(), s2.end());

                if(s1 == s2)
                    count++;
            }
        }

        return count;
    }
};
