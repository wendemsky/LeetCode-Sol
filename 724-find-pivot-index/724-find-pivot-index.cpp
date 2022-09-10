class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pf[nums.size()];
        pf[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            pf[i] = pf[i-1] + nums[i];
        }
        int lsum = 0;
        int rsum = pf[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            rsum -= nums[i];
            if(lsum == rsum) return i;
            lsum += nums[i];
        }
        
        return -1;
    }
    

};