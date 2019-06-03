/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
   输入一个链表，输出该链表中倒数第k个结点。
   注意：考虑pListNode等于空和k=0;
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
      if(pListHead==NULL||k==0)
      {
          return NULL;
      }
        ListNode *p1=pListHead,*p2=pListHead;
        int num=0;
          while(p1->next!=NULL)
          {
              if(num<k-1)
              {
                  p1=p1->next;
                  num++;
              }
              else
              {
                  p1=p1->next;
                  p2=p2->next;
              }
          }
        if(num<k-1)
        {
            return NULL;
        }
        else
        {
           return p2; 
        }
        
    }
};
