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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;

        ListNode* temp = head;
        int cnt = 0;

        // Check if k nodes are available
        while (temp != nullptr && cnt < k) {
            temp = temp->next;
            cnt++;
        }

        // Fewer than k nodes → don't reverse
        if (cnt < k)
            return head;

        // Reverse first k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;

        for (int i = 0; i < k; i++) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // head is now the last node of reversed group
        head->next = reverseKGroup(curr, k);

        return prev;
        
    }
};