/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next;
        node -> val = temp -> val;
        node -> next = temp -> next;
        delete temp;
    }
};