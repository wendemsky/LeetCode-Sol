class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for(int i=0;i<n.size(); i++){
            mx = max(n[i]-'0', mx);
        }

        return mx;
    }
};


// 82734

// 11111
// 11111
// 10111
// 10101
// 10100
// 10100
// 10100
// 10000

// 82734