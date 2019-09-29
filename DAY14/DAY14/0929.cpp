/*
题目描述
输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
*/

/*
解题思路：
从两个树根节点开始比较，若相等，
则继续判断左树，若不等，判断右树
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
	bool isSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == nullptr)
			return true;
		if (pRoot1 == nullptr)
			return false;
		if (pRoot1->val != pRoot2->val)
		{
			return false;
		}
		return isSubtree(pRoot1->left, pRoot2->left)
			&& isSubtree(pRoot1->right, pRoot2->right);
	}
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		bool result = false;
		if (pRoot1 != nullptr && pRoot2 != nullptr)
		{
			if (pRoot1->val == pRoot2->val)
			{
				result = isSubtree(pRoot1, pRoot2);
			}
			if (!result)
			{
				result = isSubtree(pRoot1->left, pRoot2);
			}
			if (!result)
			{
				result = isSubtree(pRoot1->right, pRoot2);
			}
		}
		return result;
	}

};