/*
��Ŀ����
����һ��������ת��������������ı�ͷ��
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
    ά��һ��ջ�����������ν�ջ
	����¼�����һ���ڵ����һ���ڵ�
	��ʱ����ջ���Σ��������¼��ֵ
	��ô�Ӽ�¼�����һ���ڵ����һ���ڵ㵽��ջ��Ľڵ� ���Ƿ�ת֮�������
	���������¼�Ľڵ㼴�ɡ�
*/

class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {

		if(pHead == nullptr)
			return nullptr;
		if(pHead->next == nullptr)
			return pHead;
			stack<ListNode*> s;
		   ListNode* cur = pHead;
		   ListNode* newhead;
		while(cur->next)
		{
			s.push(cur);
			cur = cur->next;
		}
		newhead = cur;
		while(!s.empty())
		{
			cur->next = s.top();
			cur = cur->next;
			s.pop();
		}
		cur->next = NULL;
		return newhead;
	}
};
*/