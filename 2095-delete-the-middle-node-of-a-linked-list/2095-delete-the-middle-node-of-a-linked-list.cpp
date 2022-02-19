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
    ListNode* deleteMiddle(ListNode* head) {
         if (head == NULL) {
          return NULL;
       }
       if (head->next == NULL) {
          delete head;
          return NULL;
       }
        ListNode* slow = head , *fast = head ,*e = head;
        
        
        while(fast!=NULL && fast->next!=nullptr){
            if(slow!=head) e = e->next;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        e->next = slow->next;
        delete slow;
        return head;
        
    }
};