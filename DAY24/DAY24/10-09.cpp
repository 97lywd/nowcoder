/*
��Ŀ����
����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬
һ��ָ����һ���ڵ㣬��һ������ָ��ָ������һ���ڵ㣩��
���ؽ��Ϊ���ƺ��������head��
��ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
*/

/*
����˼·��
��һ����
	����ԭ���Ľڵ����ԭ���ڵ��next
�ڶ�����
	�����ƺ�Ľڵ㣬����randomָ��,���������ڵ�Ĺ�ϵ�ǣ�A->next->random = A'->random->next
��������
	���븴�Ƶ�������ԭ����
*/

/*
struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
			label(x), next(NULL), random(NULL) {
	}
};
*/
class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (!pHead)
			return nullptr;
		//����ԭ��next��ָ��
		RandomListNode* cur = pHead;
		while (cur)
		{
			RandomListNode* newnode = new RandomListNode(cur->label);
			newnode->next = cur->next;
			cur->next = newnode;
			cur = newnode->next;
		}
		//����randomָ��
		cur = pHead;
		while (cur)
		{
			RandomListNode* newhead = cur->next;
			if (cur->random) {
				newhead->random = cur->random->next;
			}
			cur = newhead->next;
		}
		//�ֿ�����
		RandomListNode* pClone = pHead->next;
		RandomListNode* tmp;
		cur = pHead;
		while (cur->next)
		{
			tmp = cur->next;
			cur->next = tmp->next;
			cur = tmp;
		}
		return pClone;
	}
};