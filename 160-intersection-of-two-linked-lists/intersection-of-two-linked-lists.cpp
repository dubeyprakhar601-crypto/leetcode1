/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int n1=0;
        int n2=0;
        while(temp1!=nullptr){
            n1++;
            temp1=temp1->next;

        }
        while(temp2!= nullptr){
            n2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(n1>n2){
            int x=n1-n2;
            while(x>0 && temp1!=nullptr){
                
                temp1=temp1->next;
                x--;
            }

        }else{
            int x2=n2-n1;
            while(x2>0   && temp2 !=nullptr){
              
                temp2=temp2->next;
                  x2--;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return temp1;
    }
};