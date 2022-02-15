class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xori = 0;
        for(auto num : nums) {
            xori ^= num;
        }
        return xori;
    }
};
