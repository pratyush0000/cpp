// 234. Palindrome Linked List

// Given the head of a singly linked list, return true if it is a 
// palindrome
//  or false otherwise.

 

// Example 1:


// Input: head = [1,2,2,1]
// Output: true
// Example 2:


// Input: head = [1,2]
// Output: false
 

// Constraints:

// The number of nodes in the list is in the range [1, 105].
// 0 <= Node.val <= 9
 

// Follow up: Could you do it in O(n) time and O(1) space?


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
    bool isPalindrome(ListNode* head) {

        if (!head || !head->next) return true;
        ListNode* midd = head;
        ListNode* endd = head;

        while (endd && endd->next) {
            midd = midd->next;
            endd = endd->next->next;
        }

        ListNode* prev =nullptr;
        ListNode* curr=head;
        while(curr!=midd){
            ListNode* nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        ListNode* headone = prev;
        ListNode* headtwo = midd;
        
        //handling odd no. of nodes
        if(endd){
            headtwo=headtwo->next;
        }

        while (headone&&headtwo) {
            if (headone->val!=headtwo->val) {
                return false;
            }
            headone=headone->next;
            headtwo=headtwo->next;
        }
        return true;


    }
};