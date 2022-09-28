class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        string s = str;
        for(int i=0;i<str.size()-1;i++){
            char c = s[0];
            s.erase(0,1);
            s.push_back(c);
            if(s==str) return true;
        }
        return false;
    }
};