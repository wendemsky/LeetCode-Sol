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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *s = head,*f = head;
        for(int i=1;i<k;i++) f = f->next;
        ListNode *p = f;
        while(f->next!=NULL){
            f = f->next;
            s = s->next;
        }
        int temp = p->val;
        p->val = s->val;
        s->val = temp;
        
        return head;
        
        
    }
};