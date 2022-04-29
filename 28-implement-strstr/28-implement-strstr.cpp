class Solution {
public:
    int strStr(string haystack, string needle) {
        int nsize = needle.size();
        if(nsize==0) return 0;
        //vector<int> n(26);
        //for(int i=0;i<nsize;i++) n[needle[i]-'a']++;
            
        for(int i=0;i<haystack.size();i++){
            string temp = "";
            if(i+nsize<=haystack.size()){
                for(int j=i;j<i+nsize;j++){
                    temp+=haystack[j];
                }
                if(temp==needle) return i;
            }
        }
        return -1;
    }
};