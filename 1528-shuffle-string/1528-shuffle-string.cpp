class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(indices[j]>indices[j+1]){
                    int temp = indices[j];
                    indices[j] = indices[j+1];
                    indices[j+1] = temp;
                    
                    char tc = s[j];
                    s[j] = s[j+1];
                    s[j+1] = tc;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<indices[i]<<" ";
        // }
        
        return s;
    }
};