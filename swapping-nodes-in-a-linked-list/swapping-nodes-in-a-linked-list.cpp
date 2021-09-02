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
        ListNode *first=head;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        cout<<first->val;
        ListNode *second=head;
        ListNode *temp=first;
        while(temp->next){
            temp=temp->next;
            second=second->next;
        }
        cout<<second->val;
        int t=first->val;
        first->val=second->val;
        second->val=t;
        return head;
    }
};