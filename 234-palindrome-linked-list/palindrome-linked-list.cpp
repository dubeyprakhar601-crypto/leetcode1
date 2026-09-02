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
    ListNode* reverse(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* temp = head;
        ListNode* pre = nullptr;
        ListNode* temp2;
        while (temp != nullptr) {
            temp2 = temp->next;
            temp->next = pre;
            pre = temp;
            temp = temp2;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverse(slow->next);
        ListNode* first = head;
        ListNode* sec = newHead;
        while (sec != nullptr) {
            if (first->val != sec->val) {
                reverse(newHead);
                return false;
            }
            first = first->next;
            sec = sec->next;
        }
        reverse(newHead);
        return true;
    }
};