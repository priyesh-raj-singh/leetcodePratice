class Solution {
public:
ListNode* swapNodes(ListNode* head, int k) {
if(head==NULL || head->next ==NULL) return head;
ListNode* slow = head , *fast = head;
ListNode *first , *second ;
for(int i = 0 ; i<k-1 ; i++)
fast = fast->next;
first = fast;
while(fast->next!=NULL){
fast = fast->next;
slow = slow->next;
second = slow;
}
swap(first->val , second->val);
return head;
}
};