
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur = dummy;
        while(head != NULL)
        {
           if(head->val != val){
               cur->next = head;
               cur = cur->next;
           }
            head = head->next;
        }
        cur->next = NULL;
        return dummy->next;
    }
};