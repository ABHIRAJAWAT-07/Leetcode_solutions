 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA=headA;
        ListNode* pB=headB;
        int lenA=0,lenB=0;
        while(pA!=NULL){
           lenA++;
           pA=pA->next;
        }
       while(pB!=NULL){
           lenB++;
           pB=pB->next;
        }
        pA=headA;
        pB=headB;
        if(lenA>lenB){
            int diff=lenA-lenB;
            for(int i=1;i<=diff;i++){
                pA=pA->next;
            }
            while(pA!=pB){
                pA=pA->next;
                pB=pB->next;
            }
            return pA;
        }
        else{
            int diff=lenB-lenA;
            for(int i=1;i<=diff;i++){
                pB=pB->next;
            }
            while(pB!=pA){
                pA=pA->next;
                pB=pB->next;
            }
            return pA;
        }

    }
};