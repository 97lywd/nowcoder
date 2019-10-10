/*
题目描述
输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。
*/

/*
解题思路：
利用二叉树的中序遍历性质 --- 排序
左右指针作为链表的前后指针
*/
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		stack<TreeNode*>s;
		TreeNode* pre = nullptr;
		TreeNode* ret;
		while (pRootOfTree || !s.empty())
		{
			while (pRootOfTree)
			{
				s.push(pRootOfTree);
				pRootOfTree = pRootOfTree->left;
			}
			if (!s.empty())
			{
				pRootOfTree = s.top();
				s.pop();
				if (pre != nullptr)
				{
					pre->right = pRootOfTree;
					pRootOfTree->left = pre;
				}
				else {
					ret = pRootOfTree;
				}
				pre = pRootOfTree;
				pRootOfTree = pRootOfTree->right;
			}
		}
		return ret;
	}
};