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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1,*curr2 = list1, *curr3 = list2;
        int counter1 = 0,counter2 = 0;
        while(counter1!=a-1){
            curr1 = curr1->next;
            curr2 = curr2->next;
            counter1++; counter2++;
        }while(counter2!=b+1){
            curr2 = curr2->next;
            counter2++;
        }
        
        while(curr3->next != NULL){
            curr3 = curr3->next;
        }
        
        curr1->next = list2;
        curr3->next = curr2;
        
        return list1;
        
    }
};