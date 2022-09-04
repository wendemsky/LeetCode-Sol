class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n=matrix[0].size(), i;
        for(i=0;i<m;i++){
            if(matrix[i][0]==target) return true;
            else if(target<matrix[i][0]) break;
        }
        if(i<1) return false;
        for(int j=0;j<n;j++){
            if(matrix[i-1][j]==target) return true;
        }
        
        return false;
    }
};