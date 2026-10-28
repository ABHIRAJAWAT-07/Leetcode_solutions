class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //SC=O(m+n)
        ListNode* tA=list1;
        ListNode* tB=list2;
        ListNode* c=new ListNode(100);
        ListNode* tempC=c;
        while(tA!=NULL && tB!=NULL){
            if(tA->val<=tB->val){
                ListNode* t= new ListNode(tA->val);
                tempC->next=t;
                tempC=t;
                tA=tA->next;
            }
            else{
                ListNode* t= new ListNode(tB->val);
                tempC->next=t;
                tempC=t;
                tB=tB->next;
            }
        }
        if(tA==NULL){
            tempC->next=tB;
        }
        else{
            tempC->next=tA;
        }
        return c->next;


    }
};