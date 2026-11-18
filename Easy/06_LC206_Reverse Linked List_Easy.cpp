
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; // Nothing is behind the first node
        ListNode* curr = head;    // Start at the beginning

        while (curr != nullptr) {
            ListNode* nxt = curr->next; // Save the next node
            curr->next = prev;          // Flip the arrow backward
            prev = curr;                // Move prev forward
            curr = nxt;                 // Move curr forward
        }

        return prev; // prev is now the new head
    }
};
