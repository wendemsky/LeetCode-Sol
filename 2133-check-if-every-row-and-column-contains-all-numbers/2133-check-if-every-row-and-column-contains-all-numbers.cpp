class Solution {
public:
    bool checkValid(vector<vector<int>>& board) {
        vector<int> hr(board.size(), 0);
        for(int i=0;i<board.size();i++){
            
            for(int j=0;j<board.size();j++){
                hr[board[i][j]-1]++;
            }
            for(int k=0;k<board.size();k++){
                if(hr[k]==0) return false;
            }
            for(int k=0;k<board.size();k++){
                hr[k]=0;
            }
        }
        for(int i=0;i<board.size();i++){
            
            for(int j=0;j<board.size();j++){
                hr[board[j][i]-1]++;
            }
            for(int k=0;k<board.size();k++){
                if(hr[k]==0) return false;
            }
            for(int k=0;k<board.size();k++){
                hr[k]=0;
            }
        }
        return true;
    }
};