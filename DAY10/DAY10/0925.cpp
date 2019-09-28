
/*
题目描述：
输入一个链表，输出该链表中倒数第k个结点。
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
解题思路：
   采用双指针法，新定义指针指向原链表，让新指针先走k步
   假设一个链表有n个节点，那么此时对于新指针还剩n-k个节点，
   此时让两个指针同时走，那么原来的指针就走了n-k个节点
   也就找到了倒数第k个节点。
   本题k是unsigned，所以不考虑小于0情况。
   还应该考虑k比节点多的情况
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