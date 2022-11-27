class Solution {
public:
    int f(int i, int j, vector<vector<int>> &triangle, vector<vector<int>> &dp){
        int n = triangle.size();
        if(i == n-1) return triangle[n-1][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int d = triangle[i][j] + f(i+1, j, triangle, dp);
        int dg = triangle[i][j] + f(i+1, j+1, triangle, dp);
        
        return dp[i][j] = min(d, dg);
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> front(n, 0);
        for(int j=0; j<n; j++){
            front[j] = triangle[n-1][j];
        }
        
        //Filled the last row, start from second last row
        for(int i=n-2; i>=0 ; i--){
            //Each row has i col's
            vector<int> curr(n, 0);
            for(int j=i; j>=0; j--){
                int d = triangle[i][j] + front[j];
                int dg = triangle[i][j] + front[j+1];
                curr[j] = min(d, dg);
            }
            front = curr;
        }
        return front[0];
    }
};