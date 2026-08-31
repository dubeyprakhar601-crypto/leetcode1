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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr)
        return head;
        vector<int>nums;
        ListNode* temp=head;
        while(temp!=nullptr ){
            nums.push_back(temp->val);
            if(temp->next ==nullptr)
            break;
            temp=temp->next->next;

        }
        ListNode* temp2=head->next;
        while(temp2!=nullptr ){
            nums.push_back(temp2->val);
            if(temp2->next==nullptr)
            break;
            temp2=temp2->next->next;
        }
        ListNode* temp3=head;


        for(int i=0;i<nums.size();i++){
            temp3->val=nums[i];
            temp3=temp3->next;
        }
        return head;

        
    }
};