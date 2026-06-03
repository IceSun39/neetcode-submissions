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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 1;
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
            size++;
        }

        n = size - n;

        if(size == 1) return nullptr;
        
        temp = nullptr;
        ListNode* toDelete = head;
        for(int i = 0; i < n; i++){
            temp = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head){
            head = head->next;
            delete toDelete;
        }
        else{
            temp->next = toDelete->next;
            delete toDelete;
        }

        return head;
    }
};
