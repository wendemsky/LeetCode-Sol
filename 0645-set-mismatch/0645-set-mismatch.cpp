class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        vector<int> hash(n, 0);
        for(int i=0; i<n;i++){
           if(hash[nums[i]-1]!=0){
               ans.push_back(nums[i]);
           }
           hash[nums[i]-1]++;  
        }
        for(int i=0;i<n;i++){
            if(hash[i]==0)
                ans.push_back(i+1);
        }
        return ans;
    }
};