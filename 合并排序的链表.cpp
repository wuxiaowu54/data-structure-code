/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL&&pHead2==NULL)
        {
            return pHead1;
        }
        if(pHead1==NULL&&pHead2!=NULL)
        {
            return pHead2;
        }
        if(pHead1!=NULL&&pHead2==NULL)
        {
            return pHead1;
        }
        ListNode * l3,*pHead3;
        pHead3=new ListNode(pHead1->val);
        l3=pHead3;
        int first=0;
        while(pHead1!=NULL&&pHead2!=NULL)
        {
            ListNode* now=new ListNode(pHead1->val);
            if(pHead1->val<=pHead2->val)
            {
                now->val=pHead1->val;
                pHead1=pHead1->next;
            }
            else
            {
                now->val=pHead2->val;
                pHead2=pHead2->next;
            }
            if(first==0)
            {
                pHead3=now;
                l3=pHead3;
                first=1;
            }
            else
            {
                l3->next=now;
                l3=l3->next;
            }
        }
        while(pHead1!=NULL)
        {
            ListNode* now=new ListNode(pHead1->val);
            now->val=pHead1->val;
            pHead1=pHead1->next;
            l3->next=now;
            l3=l3->next;
        }
        while(pHead2!=NULL)
        {
            ListNode* now=new ListNode(pHead1->val);
            now->val=pHead2->val;
                pHead2=pHead2->next;
                   l3->next=now;
                l3=l3->next;
        }
        l3->next=NULL;
        return pHead3;
    }
};
