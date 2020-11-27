/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pHead1 ListNode类 
 * @param pHead2 ListNode类 
 * @return ListNode类
 */
struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2 ) {
    struct ListNode *ta=pHead1,*tb=pHead2;
    if (pHead1==NULL || pHead2 == NULL)
        return NULL;
//     while(ta != tb)
//     {
//         ta= ta ? ta->next :pHead2;
//         tb =tb ? tb->next :pHead1;
//     }
    while(ta != tb)
    {
        if(ta ==NULL)
            ta=pHead2;
        else
            ta=ta->next;
        if(tb== NULL)
            tb=pHead1;
        else
            tb=tb->next;
    }
    return ta;
}
