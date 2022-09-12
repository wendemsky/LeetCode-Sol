class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int beg = 1, end = num/2;
        long long mid = beg+(end-beg)/2;
        while(beg<=end){
            if(mid*mid==num) return true;
            if(mid*mid>num){
                end = mid-1;
            }if(mid*mid<num){
                beg = mid+1;
            }
            mid = beg+(end-beg)/2;
        }
        return false;
    }
};