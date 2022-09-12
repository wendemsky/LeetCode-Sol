class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int beg = 0, end = x, ans;
        long long mid  = beg + (end-beg)/2;
        while(beg<=end){
            if(mid*mid==x) return mid;
            else if(mid*mid < x){
                beg = mid+1;
                ans = mid;
            }
            else end = mid-1;
            mid = beg + (end-beg)/2;
        }
        
        return ans;
    }
};