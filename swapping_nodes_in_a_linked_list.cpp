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
     ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left=head;
        ListNode* rigth=head;
        for(int i=1;i<k;i++)
        left=left->next;
        ListNode* curr = left;
        while(curr->next!=NULL){
            curr = curr->next;
            rigth=rigth->next;
        }
        int t = left->val;
        left->val = rigth->val;
        rigth->val =t;
        return head;
    }
};


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        int length=0;
        while(temp != NULL)
        {
            temp = temp->next;
            length++;
        }
        temp = head;
        int check = length - (k-1);
        int count=0;
        int use;
        int use1;
        while(temp != NULL)
        {
            count++;
            if (count == k && count == check)
            {
                temp1 = temp;
                temp2 = temp;

            }
            else if (count == k)
            {temp1 = temp;}
            
            else if (count == check)
            {
                temp2 = temp; 
            }
            temp = temp->next;

        }
        use = temp1->val;
        use1 = temp2->val;
        temp1->val = use1;
        temp2->val = use;

        return head;

       
    }

};


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        
        vector<int>v;
        int count =0;
        while(temp)
        {   v.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        
        swap(k-1, count-k, v);
        int i=0;
        while(temp2)
        {
            temp2->val = v[i];
            i++;
            temp2= temp2->next;
        }
        
        return head;
        
        
    }
    void swap(int i,int j ,vector<int>&v)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

};