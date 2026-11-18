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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }
        vector<ListNode*> vt;
        int size=n/k;
        int rem=n%k;
        temp=head;
        while(temp!=NULL){
             ListNode* c=new ListNode(100);
             ListNode* tc=c;
             int s=size;
             if(rem>0) s++;
             rem--;
            for(int i=1;i<=s;i++){
                tc->next=temp;
                temp=temp->next;
                tc=tc->next;
            }
            tc->next=NULL;
            vt.push_back(c->next);
        }
        if(vt.size()<k){
            int extra=k-vt.size();
            for(int i=1;i<=extra;i++){
                vt.push_back(NULL);
            }
        }
        return vt;
 
    }
};