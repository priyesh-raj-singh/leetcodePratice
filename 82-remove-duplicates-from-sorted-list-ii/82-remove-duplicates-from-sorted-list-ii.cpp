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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = new ListNode(0);
        ListNode *temp = res;
        map<int , int> mp;
        while(head!=NULL){
            mp[head->val]++;
            head = head->next;
            
        }
        for(auto it = mp.begin() ; it!=mp.end() ; it++){
            if(it->second ==1){
                res->next = new ListNode(it->first);
                res = res->next;
            }
        }
        if(res==res->next){
            return NULL;
        }
        else
            return temp->next;
        
        
        
    }
};