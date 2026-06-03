/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        
        Node* deepCopy = new Node(head->val);
        Node* temp = head->next, *tempCopy = deepCopy;
        unordered_map<Node*, Node*> oldToNew;
        oldToNew[head] = deepCopy;

       while (temp != nullptr) {
            Node* newNode = new Node(temp->val);
            tempCopy->next = newNode;
            oldToNew[temp] = newNode; // Запам'ятовуємо відповідність старого вузла новому
            tempCopy = tempCopy->next;
            temp = temp->next;
        }

        temp = head, tempCopy = deepCopy;
        while(temp){
            Node* rand = temp->random;
            if(random == nullptr){
                tempCopy->random = nullptr;
            }
            else{
                tempCopy->random = oldToNew[temp->random];
            }

            temp = temp->next;
            tempCopy = tempCopy->next;
        }
        return deepCopy;
    }
};
