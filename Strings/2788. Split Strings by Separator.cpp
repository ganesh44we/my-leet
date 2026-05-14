class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char sep) {
        vector<string> v;
        for(string s:words){
            string str="";
            for(char c:s){
                if(c==sep){
                    if(str!="") v.push_back(str);
                    str="";
                    continue;
                }
                str+=c;
            }
            if(str!="") v.push_back(str);
        }
        return v;
    }
};
