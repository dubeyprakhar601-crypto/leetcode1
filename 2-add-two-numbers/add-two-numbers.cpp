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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;

        ListNode* dumyNode=new ListNode(-1);
        ListNode* curr=dumyNode;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        while(temp1!=nullptr || temp2!=nullptr){
            int x=carry;
            if(temp1) x+=temp1->val;
            if(temp2) x+=temp2->val;
            curr->next=new ListNode(x%10);
            curr=curr->next;
            carry=x/10;
            if(temp1) temp1=temp1->next;
             if(temp2) temp2=temp2->next;
        }
        if(carry){
            curr->next= new ListNode(carry%10);
            carry=carry/10;

        }
        return dumyNode->next;


        
    }
};