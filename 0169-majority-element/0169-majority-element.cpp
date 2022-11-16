class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> M;
        for(int e: nums){
            M[e]++;
        }
        int freq = INT_MIN, ans;
        for(auto e: M){
            if(e.second>freq){
                freq = e.second;
                ans = e.first;
            }
        }
        
        return ans;
    }
};