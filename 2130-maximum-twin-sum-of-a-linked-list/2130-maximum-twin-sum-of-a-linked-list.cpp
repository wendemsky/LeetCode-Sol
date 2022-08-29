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
    int pairSum(ListNode* head) {
        ListNode *s = head, *f = head;
        while(f!=NULL && f->next!=NULL){
            f = f->next->next;
            s = s->next;
        }
        
        ListNode *curr = s;
        ListNode * prev = NULL;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        ListNode * x1 = head, *x2 = prev;
        
        int maxsum = INT_MIN;
        while(x1->next!=NULL){
            if((x1->val + x2->val)>maxsum) maxsum = x1->val + x2->val;
            x1 = x1->next;
            x2 = x2->next;
        }
        
        
        
        return maxsum;
        
    }
};