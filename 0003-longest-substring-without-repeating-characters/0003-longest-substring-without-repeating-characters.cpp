class Solution {
public:  
    int lengthOfLongestSubstring(string s) {
        int ans = 0, ind = 0;
        vector<int> hash(128, 0);
        while(ind<s.size()){
            int size = 0;
            for(int i=ind; i<s.size();i++){
                if(hash[s[i]] != 0){ 
                    break;
                }
                hash[s[i]]++;
                size++;
            }
            ans = max(size, ans);
            fill(hash.begin(), hash.end(), 0);
            ind++;
        }
        return ans;
    }
};