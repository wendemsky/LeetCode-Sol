class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        for(int i=0;i<nums.size();i++){
            int c = count(nums.begin(),nums.end(),nums[i]);
            if(c==1){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};