class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=0;
        int count=0;
        ListNode* temp = head;
        //Count the length of linked list first
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        //Checking whether value is 1 then calculate
        for(int i=count-1; i>=0; i--){
            if(head->val==1){
                sum+=pow(2,i);
            }
            head=head->next;
        }
        return sum; 
    }
};