/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
         ListNode* meetingNode=MeetingNode(pHead);
         if(meetingNode==NULL)return NULL;
         ListNode* pNode1=pHead;
         ListNode* pNode2=meetingNode;
         while(pNode1!=pNode2)
         {
            pNode1=pNode1->next;
            pNode2=pNode2->next;
         }
        return pNode1;
    }
    ListNode* MeetingNode(ListNode* pHead)
    {
        if(pHead==NULL)
        {
            return NULL;
        }
        ListNode* slowNode=pHead->next;
        if(slowNode==NULL)
            return NULL;
        ListNode* fastNode=slowNode->next;
        while(fastNode!=NULL&&slowNode!=NULL)
        {
            if(slowNode==fastNode)
                return fastNode;
            slowNode=slowNode->next;
            fastNode=fastNode->next;
            if(fastNode!=NULL)
                fastNode=fastNode->next;
        }
        return NULL;
    }
};
