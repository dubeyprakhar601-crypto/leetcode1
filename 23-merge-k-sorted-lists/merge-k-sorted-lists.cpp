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
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
            pq.push({nums[i]->val,nums[i]});
            }
        }
        ListNode* dumyNode=new ListNode(-1);
        ListNode* temp=dumyNode;
        while(!pq.empty()){
            auto it=pq.top();
            temp->next=it.second;
            temp=temp->next;
            pq.pop();
            ListNode* temp3=it.second->next;
            if(temp3){
            pq.push({temp3->val,temp3});
            }

        }
        return dumyNode->next;

        
    }
};