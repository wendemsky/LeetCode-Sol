class Solution {
public:
    string makeGood(string s) {
        for(int i=1;i<s.size();i++){
            if(i>=1 && (abs(s[i]-s[i-1])==32)){
                s.erase(s.begin()+i-1, s.begin()+i+1);
                i-=2;
            }
        }
        
        return s;
    }
};