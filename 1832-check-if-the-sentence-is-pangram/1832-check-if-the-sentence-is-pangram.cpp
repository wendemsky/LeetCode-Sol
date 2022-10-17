class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char, int> M;
        for(int i=0;i<sentence.size();i++){
            M[sentence[i]]++;
        }
        int ans=0;
        for(auto e: M){
            ans++;
        }
        cout<<ans;
        if(ans==26) return true;
        else return false;
    }
};