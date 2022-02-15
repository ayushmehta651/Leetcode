class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> c(26,0);
        for(char i:chars) 
            c[i-'a']++;
        
        int ans = 0;
        
        for(auto word:words) {
            vector<int> v = c;
            bool good = true;
            for(char i:word) {
                if(v[i-'a']) 
                    v[i-'a']--;
                else {
                    good = false; 
                    break;
                }
            }
            if(good) ans += word.length();
        }
        return ans;
    }
};
