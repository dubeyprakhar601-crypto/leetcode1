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
ListNode* findMiddle(ListNode* head){
    ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
}
ListNode* merge(ListNode* left,ListNode* right){
    ListNode* dummyNode= new ListNode(-1);
    ListNode* temp=dummyNode;

    while(left!=nullptr && right!=nullptr){
        if(left->val < right->val){
            temp->next=left;
            left=left->next;
        }else{
            temp->next=right;
            right=right->next;
        }
        temp=temp->next;

    }
    if(left){
        temp->next=left;
        
    }else{
        temp->next=right;
    }
    return dummyNode->next;



}
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* slow=findMiddle(head);
        
        ListNode* leftHead=head;
        ListNode* rightHead=slow->next;
        slow->next=nullptr;
        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return merge(leftHead,rightHead);

        
    }
};