class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0') %2 != 0) return num;
            num.erase(num.end()-1);
        }

        return "";
    }
};