class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        string num = to_string(x);
        int f = 0;
        if(num[0] == '-'){
            num.erase(num.begin());
            f = 1;
        }
        for(int i=0;i<num.size();i++){
            ans += ((num[i]-'0') * pow(10,i));
        }
        if(ans>INT_MAX) return 0;
        if(f==1) return ans*(-1);
        return ans;
    }
};