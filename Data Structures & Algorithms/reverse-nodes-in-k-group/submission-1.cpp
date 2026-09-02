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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* gp= &dummy;
        while(true)
        {
            ListNode* kth=gp;
            for(int i=0;i<k&&kth;i++)
            {
                kth=kth->next;
            }
            if(!kth)
            {
                break;
            }
            ListNode*gn=kth->next;
            ListNode*prev=gn;
            ListNode*curr=gp->next;
            while(curr!=gn)
            {
                ListNode*temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
            ListNode*temp=gp->next;
            gp->next=kth;
            gp=temp;
        }
        return dummy.next;
    }
};
