class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            int s=1;
            string temp=sentences[i];
            for(int j=0;j<temp.size();j++){
                if(temp[j]==' ') s++;
            }
            if(s>max) max=s;
        }
        return max;
    }
};