class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid = (l+r)/2;
        while(l<=r){
            if(nums[mid] == target) return mid;
            if(target<nums[mid]) r = mid-1;
            else l = mid + 1;
            
            mid = (l+r)/2;
        }
        
        return -1;
    }
};