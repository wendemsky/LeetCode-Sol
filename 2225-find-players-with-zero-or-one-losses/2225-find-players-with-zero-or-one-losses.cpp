class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> L;
        for(int i=0;i<matches.size();i++){
            for(int j=0;j<2;j++){
                if(L.find(matches[i][j])==L.end()){
                    L.insert({ matches[i][j], 0 });
                }
                if(L.find(matches[i][j])!=L.end() && j==1){
                    L[matches[i][j]]++;
                }
            }
        }
        vector<vector<int>> ans;
        vector<int> L0, L1;
        
        for(auto e: L){
            if(e.second==0) L0.push_back(e.first);
            else if(e.second==1) L1.push_back(e.first);
        }
        sort(L0.begin(), L0.end()); sort(L1.begin(), L1.end());
        
        ans.push_back(L0); 
        ans.push_back(L1);
        
        return ans;
        
    }
};