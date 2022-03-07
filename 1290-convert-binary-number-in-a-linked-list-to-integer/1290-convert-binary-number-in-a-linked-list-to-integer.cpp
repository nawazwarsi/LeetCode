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
    int getDecimalValue(ListNode* head) {
        int sum=0;
        int count=0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        for(int i=count-1; i>=0; i--){
            if(head->val==1){
                sum+=pow(2,i);
            }
            head=head->next;
        }
        return sum;
        
    }
};