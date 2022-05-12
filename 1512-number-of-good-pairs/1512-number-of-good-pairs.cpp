class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans = 0;
        for(auto e:m){
            if(e.second>0) ans+= (e.second * (e.second-1))/2; 
        }
        
        return ans;
    }
};