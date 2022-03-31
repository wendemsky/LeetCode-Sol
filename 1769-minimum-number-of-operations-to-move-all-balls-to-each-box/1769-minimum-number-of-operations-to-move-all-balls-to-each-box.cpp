class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            int op=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    op+=abs(i-j);
                }
            }
            ans.push_back(op);
        }
        return ans;
    }
};