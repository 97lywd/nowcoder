
/*
��Ŀ������
����һ����������������е�����k����㡣
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
����˼·��
   ����˫ָ�뷨���¶���ָ��ָ��ԭ��������ָ������k��
   ����һ��������n���ڵ㣬��ô��ʱ������ָ�뻹ʣn-k���ڵ㣬
   ��ʱ������ָ��ͬʱ�ߣ���ôԭ����ָ�������n-k���ڵ�
   Ҳ���ҵ��˵�����k���ڵ㡣
   ����k��unsigned�����Բ�����С��0�����
   ��Ӧ�ÿ���k�Ƚڵ������
*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode* cur = pListHead;
		if (pListHead == nullptr)
			return nullptr;
		while (k--)
		{
			if (cur == nullptr)
				return nullptr;
			cur = cur->next;
		}
		while (cur)
		{
			pListHead = pListHead->next;
			cur = cur->next;
		}
		return pListHead;
	}
};