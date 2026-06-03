class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.length();
        vector<int> hash(26,0);
        int maxcnt=0,l=0,r=0; 
        int maxfrq=0;
        while(r<len){
           
                hash[s[r]-'A']++;
                maxfrq=max(maxfrq, hash[s[r]-'A']);
                
                while((r-l+1)-maxfrq>k){
                    hash[s[l]-'A']--;
                    l++;
                }
              
                    maxcnt=max(maxcnt, r-l+1);
                
               r++;
        }
        return maxcnt;
    }
};
