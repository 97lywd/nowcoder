/*
题目描述
输入一个链表，反转链表后，输出新链表的表头。
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
    维护一个栈，让链表依次进栈
	随后记录下最后一个节点的下一个节点
	此时，出栈依次，让链表记录下值
	那么从记录下最后一个节点的下一个节点到出栈完的节点 就是反转之后的链表
	返回这个记录的节点即可。
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