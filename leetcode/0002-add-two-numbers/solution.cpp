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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* ptr=l3;
        int sum=0, carry=0;
        while(l1!=NULL && l2!=NULL){
                sum=l1->val+l2->val;
                if(l3==NULL){
                    l3->val=(sum+carry)%10;
                    carry =(sum+carry)/10;
                }  
                else{
                    ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=(sum+carry)%10;
                    carry=(sum+carry)/10;
                    ptr->next=temp;
                    ptr=ptr->next;
                    
                } 
                l1=l1->next;
                l2=l2->next; 
        }
        while(l1!=NULL){
                   ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=((l1->val)+carry)%10;
                    carry=((l1->val)+carry)/10;
                    ptr->next=temp;
                    ptr=ptr->next;
                    l1=l1->next;
        }
        while(l2!=NULL){
                    ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=((l2->val)+carry)%10;
                    carry=((l2->val)+carry)/10;
                    ptr->next=temp;
                    ptr=ptr->next;
                    l2=l2->next;
        }
        if(carry){
                    ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=carry;
                    ptr->next=temp;
        }
        return l3->next;
    }
};