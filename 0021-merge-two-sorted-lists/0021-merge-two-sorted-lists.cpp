class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = NULL;
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        if(list1->val<=list2->val){
            temp = list1;
            temp->next = mergeTwoLists(list1->next, list2);
        }
        else{
            temp = list2;
            temp->next = mergeTwoLists(list2->next, list1);
        }
        return temp;

    }
};