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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        ListNode *temp = headA;
        ListNode *tempB = headB;
        while(temp!=NULL){
            s.insert(temp);
            temp = temp->next;
        }
        while(tempB!=NULL){
            if(s.find(tempB)!=s.end())
                return tempB;
            tempB = tempB->next;
        }
        return NULL;
        
    }
};