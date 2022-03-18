class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> vis(26, false);
        
        for(int i = 0;i < s.length();i++) {
            freq[s[i] - 'a']++;
        }
        
        string res = "";
        for(int i = 0;i < s.length();i++) {
            freq[s[i] - 'a']--;
            
            if(vis[s[i] - 'a'] == false) {
                
                while(res.size() > 0 && res.back() > s[i] && freq[res.back() - 'a'] > 0) {
                    vis[res.back() - 'a'] = 0;
                    res.pop_back();
                }
                
                res += s[i];
                vis[s[i] - 'a'] = 1;
            }
        }
        return res;
    }
};
