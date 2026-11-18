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
        ListNode* current = head;
        
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Save the duplicate node to free its memory
                ListNode* duplicate = current->next;
                
                // Bypass the duplicate node
                current->next = current->next->next;
                
                // Free memory (optional on LeetCode, but good C++ practice)
                delete duplicate;
            } else {
                // Move to the next distinct element
                current = current->next;
            }
        }
        
        return head;
    }
};
