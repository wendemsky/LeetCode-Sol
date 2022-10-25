class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int last[1000001] = {};
        int ans = INT_MAX;
        for(int i=0; i<cards.size(); i++){
            if(last[cards[i]]){
                ans = min(ans, i-last[cards[i]]+2);
            }
            last[cards[i]] = i+1;
        }
        return ans==INT_MAX? -1:ans;
    }
};