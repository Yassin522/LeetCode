//l1=2->4->3
//l2=5->6->4
//car=0, sum=0
//sum=2+5+0=7, car=7/10=0 , pt=7%10=7  ==>7->
//sum=4+6+0, car=10/10=1, pt=10%10=0  =>7->0->
//sum=3+4+1=8, car=8/10=0, pt=8%10=8  =>7->0->8

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *node=new ListNode();
        ListNode *temp=node;
        int car=0;
        while(car!=0 or l1!=NULL or l2!=NULL)
        {
            int sum=0;
            //if l1 is having value, add in sum
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            //if l2 is having value, add in sum
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            //add the carry
            sum+=car;
            car=sum/10;
            ListNode* pt=new ListNode(sum%10);
            temp->next=pt;
            temp=temp->next;
        }
        return node->next;
    }
};