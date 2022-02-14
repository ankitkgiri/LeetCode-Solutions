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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* list = new ListNode();
        ListNode *head = list;
       
        while (list1 != nullptr && list2 != nullptr) {
            int val = 0;
            if (list1->val < list2->val){
                
                 val = list1->val;
                list1 = list1->next;
                
            } else {
                val = list2->val;
                list2 = list2->next;
            } 
            cout << list->val << " ";
            list->next = new ListNode(val);
            
            list = list->next;
        }
        
        if (list1 == nullptr) {
            // cout << "hello";
            list->next = list2;
        }
        
        if (list2 == nullptr) {
            // cout << list1->val;
            list->next = list1;
        }
        
        return head->next;
    }
    
};