class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                flag = 1;
                break;
            }
        }
        if(flag==1) return true; 
        else return false;
    }
};