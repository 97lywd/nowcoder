/*
��Ŀ����
����һ�������������β��ͷ��˳�򷵻�һ��ArrayList��
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

/*
����˼·��
     �����õ��������ݣ�ͷ�����List
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int>vt;
		while (head)
		{
			vt.insert(vt.begin(), head->val);
			head = head->next;
		}
		return vt;
	}
};