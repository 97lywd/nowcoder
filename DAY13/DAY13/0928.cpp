/*
题目描述
输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
*/

/*
解题思路：
例如1->5->4->2 与3->6->8->7
首先拿1与3比较 1小所以合并后的新链表第一个元素就是它
链表1向后移动指向5 在与3比较 3小 所以新链表下一个元素插入3
依次递归直至两个链表全部为空
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