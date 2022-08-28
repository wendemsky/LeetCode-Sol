/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        vector<int> v;
        ListNode *curr = head;
        while(curr!= NULL){
            v.push_back(curr->val);
            curr = curr->next; 
        }
        
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        
        reverse(v.begin(),v.end());
        
        for(int j = 0;j<v.size();j++){
            ans += ((v[j]) * pow(2,j));
        }
        
        return ans;
        
        
    }
};