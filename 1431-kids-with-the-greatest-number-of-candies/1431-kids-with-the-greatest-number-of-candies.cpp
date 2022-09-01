class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mostCandy = INT_MIN;
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>mostCandy) mostCandy = candies[i];
        }
        
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= mostCandy){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
        
        
    }
};