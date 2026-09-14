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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        int Len=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            Len++;
            temp=temp->next;
        }
        k=k%Len;
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr){
             if(k==0){
                break;
            }
            k--;
            fast=fast->next;
           
        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        ListNode* newHead=slow->next;
        slow->next=nullptr;
        return newHead;
    }
};