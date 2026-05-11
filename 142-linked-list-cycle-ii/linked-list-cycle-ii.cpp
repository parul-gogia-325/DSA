/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast= head;
        bool hascycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast=fast->next->next;
            if(slow==fast){
                hascycle =true;
                slow=head;
                break;
            }
        }
        if(!hascycle)return NULL;

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;   
        
    }
};