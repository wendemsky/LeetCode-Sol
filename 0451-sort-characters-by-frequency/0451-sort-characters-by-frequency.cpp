class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char, int> M;
        for(int i=0;i<s.size();i++){
            M[s[i]]++;
        }
        int mf = 0; char mc;
        while(!M.empty()){
            for(auto e: M){
                if(e.second>mf){
                    mf = e.second;
                    mc = e.first;
                }
            }
            for(int i=0; i<mf; i++){
                ans.push_back(mc);
            }
            M.erase(mc);
            mf = 0; 
        }
        
        return ans;
        
    }
};