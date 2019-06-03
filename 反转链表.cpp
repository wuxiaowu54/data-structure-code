/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
    输入一个链表，反转链表后，输出新链表的表头。
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
           if(pHead==NULL)
           {
               return pHead;
           }
          ListNode* pre=pHead,*Next=NULL,*node;
          node=pHead;
          while(node!=NULL)
          {
              Next=node->next;
              if(node==pHead)
              {
                  node->next=NULL;
              }
              else
              {
                  node->next=pre;
              }
              pre=node;
              node=Next;
          }
          pHead=pre;
        return pHead;
    }
};
