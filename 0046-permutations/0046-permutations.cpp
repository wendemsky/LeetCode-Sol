class Solution {
public:
    void f(vector<int> &arr, vector<int> &ds, int freq[], vector<vector<int>> &ans){
        if(ds.size()==arr.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<arr.size();i++){
            if(!freq[i]){
                ds.push_back(arr[i]);
                freq[i]=1;
                f(arr, ds, freq, ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()] ;
        for(int i=0;i<nums.size();i++) freq[i]=0;
        f(nums, ds, freq, ans);
        
        return ans;
    }
};