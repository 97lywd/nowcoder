/*
题目描述
请实现一个函数，用来判断一颗二叉树是不是对称的。
注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
*/

/*
解题思路：
	判断左树的左子树与右树的右子树 或者 左树的右子树与右树的右子树 是否相等即可

*/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
*/
class Solution {
public:
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return true;
		isSymmetrical(pRoot, pRoot);
		return false;
	}
	bool isSymmetrical(TreeNode* p1, TreeNode* p2)
	{
		if (p1 == nullptr || p2 == nullptr)
			return false;
		if (p1->val == p2->val)
			return isSymmetrical(p1->left, p2->right) && isSymmetrical(p1->right, p2->left);
	}

};