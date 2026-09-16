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
 ListNode* reverseList(ListNode* temp){
    if(temp==nullptr || temp->next==nullptr){
        return temp;
    }
    ListNode* newHead=reverseList(temp->next);
    ListNode* front=temp->next;
    front->next=temp;
    temp->next=nullptr;
    return newHead;

 }
ListNode* findkth(ListNode* temp,int k){
    k-=1;
    while(temp!=nullptr && k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* nextNode=nullptr;
        ListNode* preNode=nullptr;
        while(temp!=nullptr){
            ListNode* kThNode=findkth(temp,k);
            if(kThNode==nullptr){
                if(preNode) preNode->next=temp;
                break;

            }
            ListNode* nextNode=kThNode->next;
            kThNode->next=nullptr;
            kThNode=reverseList( temp);
            if(temp==head){
                head=kThNode;
            }else{
                preNode->next=kThNode;
            }

            preNode=temp;
            temp=nextNode;
        }
        return head;
        
    }
};