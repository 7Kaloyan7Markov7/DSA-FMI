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
    ListNode* mergeLists(ListNode* list1, ListNode* list2)
    {
        ListNode* res = new ListNode(0);
        ListNode* current = res;

        while(list1 && list2)
        {
            if(list1 -> val > list2 -> val)
            {
                current -> next = list2;
                list2 = list2 -> next;
            }
            else
            {
                current -> next = list1;
                list1 = list1 -> next;
            }
            current = current -> next;
        }

        if(list1)
        {
            current -> next = list1;
        }

        if(list2)
        {
            current -> next = list2;
        }
        return res;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res = nullptr;
        for(int i = 0;i < lists.size();++i)
        {
            res = mergeLists(res, lists[i]);
            res = res -> next;
        }
        return res;
    }
};
