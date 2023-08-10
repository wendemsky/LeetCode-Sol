class Solution {
public:
    int countDigits(int num) {
        int cnt = 0, temp = num;
        while(temp > 0){
            int n = temp % 10;
            if(num % n == 0) cnt++;
            temp /= 10;
        }
        return  cnt;
    }
};