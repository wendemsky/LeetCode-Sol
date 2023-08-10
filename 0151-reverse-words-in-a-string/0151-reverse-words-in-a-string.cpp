class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stringstream ss(s);
        vector<string> words;
        string word;

        while(ss >> word) words.push_back(word);

        reverse(words.begin(), words.end());
        for(int i=0;i<words.size();i++){
            ans += words[i];
            if(i!=words.size()-1) ans.push_back(' ');
        }

        return ans;
    }
};