class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int pf[nums.size()];
        unordered_map<int, int> mp;
        
        //pf sum array
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            pf[i] = sum;
        }
        for(int i=0;i<nums.size();i++){
            if(pf[i]==k) ans++;
            
            if(mp.find(pf[i]-k) != mp.end()){
                ans += mp[pf[i]-k];
            }
            mp[pf[i]]++;
        }
        
        return ans;
        
    }
};