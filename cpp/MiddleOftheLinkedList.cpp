// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int i = 0, countNode = 0;
    
        while (current != nullptr) {
            countNode++;
            current = current -> next; // Goes to the next node
        }
        current = head; // Start again at the beginning of the LinkedList
        while(current != nullptr) {
            if (i != countNode / 2) { // checks if i equals nbrs of nodes divide by 2
                current = current -> next; // next node
                i++;
            }  
            else { // if i equals nbrs of nodes divide by 2 
                head = current;
            }
        }
        return head;
    }
};
