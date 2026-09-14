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
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }
        int Len=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            Len++;
            temp=temp->next;

        }
        temp->next=head;
        temp=head;
        int h=Len-(k%Len);
        if(h==0){
            return head;
        }
        while(temp!=nullptr){
            h--;
            if(h==0){
                break;
            }
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
        
    }
};