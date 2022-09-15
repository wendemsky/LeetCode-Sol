class Solution {
public:
    int longestPalindrome(string s) {
        int arr[128] = {0}, ans=0;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
            if(arr[s[i]]%2==0){
                ans+=arr[s[i]];
                arr[s[i]]=0;
            }
        }
        for(int i=0;i<s.size();i++){
            if(arr[s[i]]==1){
                ans++;
                break;
            }
        }
        
        return ans;
       
    }
};