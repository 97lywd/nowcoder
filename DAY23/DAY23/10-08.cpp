/*
题目描述
输入一颗二叉树的根节点和一个整数，
打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
(注意: 在返回值的list中，数组长度大的数组靠前)
*/

/*
解题思路：
    其实本题就是DFS的思路，但需要一个数组来保存路径
	如果满足题目条件，则将这个数组插入返回的二维数组
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
	void DFS(vector<vector<int>> &ret, vector<int> &path, int target, TreeNode* root)
	{
		target -= root->val;
		path.push_back(root->val);
		if (root->left == nullptr && root->right == nullptr)
		{
			if (target == 0)
				ret.push_back(path);
		}
		if (root->left && target != 0)
			DFS(ret, path, target, root->left);
		if (root->right && target != 0)
			DFS(ret, path, target, root->right);
		path.pop_back();
	}
public:
	vector<vector<int>> FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int>> ret;
		vector<int> path;
		if (root != nullptr)
			DFS(ret, path, expectNumber, root);
		return ret;
	}
};