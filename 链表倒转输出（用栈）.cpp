/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int>ans;
        stack<int>res;
        if(head==NULL)
        {
            return ans;
        }
        while(head!=NULL)
        {
            res.push(head->val);
            head=head->next;
        }
        while(!res.empty())
        {
            int p=res.top();
            res.pop();
            ans.push_back(p);
        }
        return ans;
    }
};
