class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        if(colors.size()>1){
            int p = 0, n = 1;
            while(n<colors.size()){
                if(colors[n]==colors[p]){
                    if(neededTime[n]<neededTime[p]){
                        ans += neededTime[n];
                        n++;
                    }else{
                        ans += neededTime[p];
                        p = n;
                        n++;
                    }
                }else{
                    p = n;
                    n++;
                }
            }
        }
        return ans;
    
    }
};