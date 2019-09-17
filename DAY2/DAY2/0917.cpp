/*
题目描述
输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
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
解题思路：
     依次拿到链表数据，头插进新List
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