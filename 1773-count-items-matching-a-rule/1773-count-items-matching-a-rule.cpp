class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        string type("type"), color("color"), name("name");
        for(int i=0;i<items.size();i++){
            if(ruleKey==type && ruleValue==items[i][0]) ans++;
            else if(ruleKey==color && ruleValue==items[i][1]) ans++;
            else if(ruleKey==name && ruleValue==items[i][2]) ans++;
        }
        
        return ans;
    }
};