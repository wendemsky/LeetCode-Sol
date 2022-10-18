class Solution {
public:
    void f(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &candidates, int target){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //Pick Element at ind
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            f(ind, ans, ds, candidates, target-candidates[ind]);
            ds.pop_back();
        }
        
        f(ind+1, ans, ds, candidates, target);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0, ans, ds, candidates, target);
        
        return ans;
    }
};