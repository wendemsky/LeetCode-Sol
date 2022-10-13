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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // long long res = 0, p=0;
        // while(l1!=NULL){
        //     res += l1->val*pow(10,p);
        //     l1 = l1->next; p++;
        // } p=0;
        // while(l2!=NULL){
        //     res += l2->val*pow(10,p);
        //     l2 = l2->next; p++;
        // }
        // ListNode *final = new ListNode(0), *curr = final;
        // while(res>0){
        //     curr->val = res%10;
        //     res/=10; 
        //     if(res<=0) break;
        //     curr->next = new ListNode(0);
        //     curr = curr->next;
        // }
        
        
        ListNode *prefinal = new ListNode(0), *curr = prefinal;
        int rem = 0;
        while(l1|| l2 || rem){
            int sum = (l1 ? l1->val: 0) + (l2 ? l2->val: 0) + rem ;
            rem = sum / 10;
       
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1? l1->next: l1;
            l2 = l2? l2->next: l2;
          
            
        }
        return prefinal->next;
        
    }
};