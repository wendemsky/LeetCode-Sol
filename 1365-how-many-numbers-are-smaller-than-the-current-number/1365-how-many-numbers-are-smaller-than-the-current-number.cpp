class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int x=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[j]<nums[i]) x++;
            }
            ans.push_back(x);
        }
        
        return ans;
        
    }
};