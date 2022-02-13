class Solution {
public:
    bool checkString(string s) {
        bool foundA = false, foundB = false;
        for(int i = 0;i < s.length();i++) {
            if(s[i] == 'a') {
                if(foundB) {
                    return false;
                }
                foundA = true;
            }
            if(s[i] == 'b') {
                foundB = true;
            }
        }
        return true;
    }
};
