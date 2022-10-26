class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(k==0){
            bool f = false;
            for(int i=1;i<nums.size();i++){
                if(nums[i]==0 && nums[i-1]==0) f = true;
            }
            return f;
        }
        
        unordered_map<int, int> M;
        M.insert({0, -1});
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(M.find(sum%k) != M.end()){
                auto e = M.find(sum%k);
                if(i - e->second >1){
                    return true;
                }
            }
            M.insert({sum%k, i});
        }
        
        return false;
        
    }
};