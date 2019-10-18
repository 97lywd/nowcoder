/*
题目描述
输入一棵二叉树，判断该二叉树是否是平衡二叉树。
*/
/*
解题思路：
	AVL树的特点左右树高度之差绝对值<=1
*/

class Solution {
public:
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == nullptr)
			return true;
		int ret = Height(pRoot);
		if (ret == -1)
			return false;
		return true;
	}
private:
	int Height(TreeNode* root)
	{
		if (root == nullptr)
			return 0;
		int leftH = Height(root->left);
		int rightH = Height(root->right);
		if (leftH == -1 || rightH == -1)
			return -1;
		if (abs(rightH - leftH) > 1)
			return -1;
		return leftH > rightH ? leftH + 1 : rightH + 1;
	}
};