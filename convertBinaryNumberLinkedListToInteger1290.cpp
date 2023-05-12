/*
Given head which is a reference node to a singly-linked list. 
The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.
*/
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
        long long int ans=0, count=0;
        ListNode *ptr= head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->val==1)
            ans+=pow(2,count-1);
            ptr=ptr->next;
            count--;
        }
        return ans;
    }
};
