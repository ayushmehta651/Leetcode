class Solution {
public:
    void helper(int ind, int n, vector<int>& nums, vector<int> ds, vector<vector<int>>& res) {
        res.push_back(ds);
        
        for(int i = ind;i < n;i++) {
            if(i != ind && nums[i] == nums[ind]) continue;
            ds.push_back(nums[i]);
            helper(i + 1, n, nums, ds, res);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> ds;
        helper(0, n, nums, ds, res);
        return res;
    }
};
