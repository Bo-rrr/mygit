20201106test

#include <iostream>
using namespace std;

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> Result;
        if (!head) return Result;
        stack<int> st;
        ListNode *pNode = head;
        while (pNode) {
            st.push(pNode->val);
            pNode = pNode->next;
        }
        while (!st.empty()) {
            Result.push_back(st.top());
            st.pop();
        }
        return Result;
    }
};
