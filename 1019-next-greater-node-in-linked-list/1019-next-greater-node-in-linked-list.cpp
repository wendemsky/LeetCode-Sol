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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        if(head==NULL) return ans;
        if(head->next==NULL){
            ans.push_back(0);
            return ans;
        }
        for(ListNode *curr = head; curr!=NULL; curr = curr->next){
            ListNode *p = curr;
            while((p->val)<=(curr->val) && p->next!=NULL){
                p = p->next;
            }
            if(p == NULL) ans.push_back(0);
            else{
                if(p->val > curr->val)
                    ans.push_back(p->val);
                else ans.push_back(0);
            }
        }
        
        return ans;
    }
};