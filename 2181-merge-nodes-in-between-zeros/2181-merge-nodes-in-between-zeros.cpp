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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * curr = head;
        vector<int> v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        vector<int> ans;
        int temp = 0;
        for(int i=1;i<v.size();i++){
            if(v[i]!=0){
                temp+=v[i];
            }else{
                ans.push_back(temp);
                temp = 0;
            }
        }
        ListNode *c = head;
        for(int i=0;i<ans.size();i++){
            c->val = ans[i];
            if(i==ans.size()-1) break;
            c = c->next;
        }
        c->next = NULL;
        
        return head;
    }
};