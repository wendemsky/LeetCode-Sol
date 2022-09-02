class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=INT_MIN, sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }else{
                if(sum>max) max = sum;
                sum = 0;
            }
        }
        if(sum>max) max = sum;
        
        return max;
    }
};