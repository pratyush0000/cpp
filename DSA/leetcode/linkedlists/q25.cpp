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
        if (!head || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode *prevGrpEnd = &dummy;

        while (true) {
            ListNode *grpStart = prevGrpEnd->next;
            ListNode *cursor = prevGrpEnd;
            for (int i = 0; i < k && cursor; ++i) {
                cursor = cursor->next;
            }
            if (!cursor) break;

            ListNode *prev = nullptr, *curr = grpStart, *next = nullptr;
            for (int i=0; i<k; ++i) {
                next =curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }

            prevGrpEnd->next=prev;
            grpStart->next=curr;
            prevGrpEnd=grpStart;
        }

        return dummy.next;
    }
};