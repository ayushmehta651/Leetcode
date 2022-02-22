class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long int ans = 0;
        for(int i = 0;i < columnTitle.length() - 1;i++) {
            int d = columnTitle[i] - 'A' + 1;
            ans = ans * 26 + d;
        }
        ans += (columnTitle[columnTitle.length() - 1] - 64);
        return ans;
    }
};
