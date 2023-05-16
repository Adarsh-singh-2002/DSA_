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

    ListNode* swapPairs(ListNode* head) {
        ListNode* tempOdd = head;
        ListNode* tempEven = head;
        ListNode* check = head;
        int count = 0;
        while(head != NULL)
        {
            count +=1;
            if (count%2 != 0)
            tempOdd = head;
            else {
            tempEven = head;
            int temp = tempOdd->val;
            tempOdd->val = tempEven->val;
            tempEven->val = temp;
            }
            head = head->next;
        }
        return check;
    }
};