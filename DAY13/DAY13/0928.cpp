/*
��Ŀ����
���������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������
*/

/*
����˼·��
����1->5->4->2 ��3->6->8->7
������1��3�Ƚ� 1С���Ժϲ�����������һ��Ԫ�ؾ�����
����1����ƶ�ָ��5 ����3�Ƚ� 3С ������������һ��Ԫ�ز���3
���εݹ�ֱ����������ȫ��Ϊ��
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/

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
		if (pHead1 == nullptr)
			return pHead2;
		else if (pHead2 == nullptr)
			return pHead1;
		ListNode* cur;
		if (pHead1->val < pHead2->val)
		{
			cur = pHead1;
			cur->next = Merge(pHead1->next, pHead2);
		}
		else
		{
			cur = pHead2;
			cur->next = Merge(pHead1, pHead2->next);
		}
		return cur;
	}
};