class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> vs;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') temp = temp + s[i]; //to_string(s[i]);
            // else if(i==s.size()-1){
            //     temp = temp + s[i]; //to_string(s[i]);
            //     vs.push_back(temp);
            //     temp = "";
            // }
            else{
                vs.push_back(temp);
                temp = "";
            }
        }
        vs.push_back(temp);
        string ans = "";
        for(int i=vs.size()-1;i>=0;i--){
            if(vs[i].size()!=0){
                ans = vs[i];
                break;
            }
        }
        return ans.size();

    }
};