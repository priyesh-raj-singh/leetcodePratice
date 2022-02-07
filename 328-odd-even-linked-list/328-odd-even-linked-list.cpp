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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        int i= 0;
        while(temp){
            v.push_back(temp->val);
            i++;
            temp = temp->next;
            
        }
        temp = head;
        for(int i = 0 ; i<v.size() ; i+=2){
            temp->val = v[i];
            temp=temp->next;
        }
        for(int i = 1 ; i<v.size() ; i+=2){
            temp->val = v[i];
            temp = temp->next;
        }
        return head;
                
    }
};