class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> M;
        for(int i=0;i<words.size();i++){
            M[words[i]]++;
        }
        vector<string> ans;
        for(int i=0;i<k;i++){
            int l = INT_MIN;
            string ls;
            for(auto e:M){
                if(e.second>l){
                    l=e.second;
                    ls=e.first;
                }else if(e.second==l){
                    if(e.first<ls){
                        l=e.second;
                        ls=e.first;
                    }
                }
            }
            ans.push_back(ls);
            M.at(ls) = 0;
        }
        
        return ans;
    }
};