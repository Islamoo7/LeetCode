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
    
    
    int pairSum(ListNode* head) {
        ListNode* tortoise = head, *hare = head;
        ListNode* back = nullptr, *front = nullptr;
        while (hare && hare->next) {
            hare = hare->next->next;
            front = tortoise->next;
            tortoise->next = back;
            back = tortoise;
            tortoise = front;
        }
        hare = back;
        int max_sum = 0;
        while (tortoise) {
            max_sum = max(hare->val + tortoise->val, max_sum);
            hare = hare->next;
            tortoise = tortoise->next;
        }
        return max_sum;
    }
};