/*
题目描述
输入一个复杂链表（每个节点中有节点值，以及两个指针，
一个指向下一个节点，另一个特殊指针指向任意一个节点），
返回结果为复制后复杂链表的head。
（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
*/

/*
解题思路：
第一步：
	复制原来的节点放在原来节点的next
第二步：
	给复制后的节点，设置random指针,相邻两个节点的关系是：A->next->random = A'->random->next
第三步：
	分离复制的链表与原链表
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
		//复制原来next的指向
		RandomListNode* cur = pHead;
		while (cur)
		{
			RandomListNode* newnode = new RandomListNode(cur->label);
			newnode->next = cur->next;
			cur->next = newnode;
			cur = newnode->next;
		}
		//设置random指向
		cur = pHead;
		while (cur)
		{
			RandomListNode* newhead = cur->next;
			if (cur->random) {
				newhead->random = cur->random->next;
			}
			cur = newhead->next;
		}
		//分开链表
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