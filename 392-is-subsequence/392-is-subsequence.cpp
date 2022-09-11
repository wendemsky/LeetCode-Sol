class Solution {
public:
    bool isSubsequence(string s, string t) {
        //two pointer
        if(s.length()>t.length()) return false;
        if(s.length()==0) return true;
        int p = 0, q = 0;
        while(q<t.length()){
            if(s[p]==t[q]){
                p++, q++;
            }else{
                q++;
            }
            if(p==s.length()) return true;
        }
        
        return false;
    }
};