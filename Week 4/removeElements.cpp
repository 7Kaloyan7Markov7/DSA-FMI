class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* res = new ListNode(0);
        res -> next = head;
        ListNode* current = res;

        while(current -> next != nullptr)
        {
            if(current -> next -> val == val)
            {
                current -> next = current -> next -> next;
            }
            else
            {
                current = current -> next;
            }
        }

        ListNode* actRes = res -> next;
        return actRes;
    }
};
