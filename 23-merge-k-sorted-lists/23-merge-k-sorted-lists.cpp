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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
//         ListNode *ptr = new ListNode(INT_MAX);
//         int indx;
//         for(int i=0;i<lists.size();i++){
//             if(lists[i]->val < ptr->val){
//                 ptr = lists[i];
//                 indx = i;
//             }
//         }
//         lists[indx] = lists[indx]->next;
//         ListNode *res = ptr;
        vector<int> v;
        for(int i=0;i<lists.size();i++){
            ListNode *curr = lists[i];
            while(curr){
                v.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
        if(v.size()==0) return NULL;
        ListNode *res = new ListNode(v[0]), *curr = res;
        for(int i=1;i<v.size();i++){
            ListNode *temp = new ListNode(v[i]);
            curr->next = temp;
            curr = curr->next;
        }
        
        return res;
        
        
        
        // return ptr;
        
    }
};