/*
题目描述
输入一棵二叉树，求该树的深度。
从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，
最长路径的长度为树的深度。
*/


/*
解题思路：
	左子树和右子树都走到叶子节点，最大的就是二叉树高度
*/


class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int leftH = TreeDepth(pRoot->left);
		int rightH = TreeDepth(pRoot->right);
		return (leftH > rightH) ? leftH + 1 : rightH + 1;
	}
};