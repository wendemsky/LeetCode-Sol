class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x<0) flag = 1;
        x = abs(x);
        long long revNum = 0;
        while(x>0){
            int p = x%10;
            revNum = (revNum * 10) + p;
            x /= 10;
        }
        if(flag==1){
            revNum = revNum * -1;
            if(revNum<INT_MIN) return 0;
        }
        if(revNum>INT_MAX) return 0;
        return revNum; 
    }
};