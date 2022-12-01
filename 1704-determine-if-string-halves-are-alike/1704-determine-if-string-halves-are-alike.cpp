class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = ceil(s.size()/2);
        cout<<n<<endl;
        int v1 = 0,v2 = 0;
        for(int i=0;i<n;i++){
            cout<<i<<" "<<i+n<<endl;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                v1++;
            }
            if(s[i+n]=='a' || s[i+n]=='e' || s[i+n]=='i' || s[i+n]=='o' || s[i+n]=='u' || s[i+n]=='A' || s[i+n]=='E' || s[i+n]=='I' || s[i+n]=='O' || s[i+n]=='U'){
                v2++;
            } 
        }
        
        return v1==v2;
        
    }
};

// 0 1 2 3 4 5
// ceil(5/2) = 3
// 0+3 = 3
// 1+3 = 4
// 2+3 = 5