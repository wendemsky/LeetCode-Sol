class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum = 0;
        int dup = x;
        while(x>0){
            int last_digit = x%10;
            revNum = (revNum*10) + last_digit;
            x /= 10;
        }
        if(revNum == dup) return true;
        else return false;
    }
};