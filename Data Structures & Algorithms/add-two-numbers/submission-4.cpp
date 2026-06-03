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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0, num2 = 0, mult = 1;
        ListNode* temp1 = l1, *temp2 = l2;

        while(temp1 && temp2){
            num1 += temp1->val * mult;
            num2 += temp2->val * mult;
            mult *= 10;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1){
            num1 += temp1->val * mult;
            mult *= 10;
            temp1 = temp1->next;
        }

        while(temp2){
            num2 += temp2->val * mult;
            mult *= 10;
            temp2 = temp2->next;
        }

        int sum = num1 + num2;

        int n = sum % 10;
        sum /= 10;
        ListNode* res = new ListNode(n);
        ListNode* temp = res;
        while(sum > 0){
            n = sum % 10;
            sum /= 10;
            ListNode* newNode = new ListNode(n);
            temp->next = newNode;
            temp = temp->next;
        }

        return res;
    }
};
