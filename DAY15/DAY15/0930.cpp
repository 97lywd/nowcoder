/*
题目描述
操作给定的二叉树，将其变换为源二叉树的镜像。
*/

/*
解题思路：
从根节点开始 交换左右子节点
再将交换后的节点分别作为父节点，对他们的子节点进行交换
即可得到镜像二叉树
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
	void Mirror(TreeNode *pRoot) {
		if (pRoot == nullptr)
			return;
		TreeNode *tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};