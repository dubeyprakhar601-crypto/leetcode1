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
ListNode* mergeLink(ListNode* h1,ListNode* h2){
    ListNode* dumyNode=new ListNode(-1);
    ListNode* temp=dumyNode;
    while(h1!=nullptr && h2!=nullptr){
        if(h1->val<h2->val){
            temp->next=h1;
            h1=h1->next;
        }else{
            temp->next=h2;
            h2=h2->next;
        }
        temp=temp->next;
    }
    if(h1!=nullptr){
        temp->next=h1;
    }
    if(h2!=nullptr){
        temp->next=h2;
    }
    return dumyNode->next;
}
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        if(nums.empty()){
            return nullptr;
        }
        if( nums.size()==1){
            return nums[0];
        }
        ListNode* newHead=nums[0];
        for(int i=1;i<nums.size();i++){
            newHead=mergeLink(newHead,nums[i]);
        }
        return newHead;
        
    }
};