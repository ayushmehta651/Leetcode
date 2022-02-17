class Solution {
public:
    void helper(int ind, vector<int>& candidates, int target, vector<int> ds, vector<vector<int>>& ans) {
        if(ind == candidates.size() || target < 0) {
            return;
        }
        if(target == 0) {
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(candidates[ind]);
        helper(ind, candidates, target - candidates[ind], ds, ans);
        ds.pop_back();
        
        helper(ind + 1, candidates, target, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        helper(0, candidates, target, ds, ans);
        return ans;
    }
};
