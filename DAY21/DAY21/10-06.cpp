/*
题目描述
从上往下打印出二叉树的每个节点，同层节点从左至右打印。
*/

/*
解题思路:
   其实是一种二叉树层次遍历的思路
   维护一个TreeNode型的队列
   先拿到根节点，再判断左孩子是否存在
   如果存在入队，不存在，判断右孩子
   随后出队，直至队列为空
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
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> ret;
		if (root == nullptr)
			return ret;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			ret.push_back(q.front()->val);
			if (q.front()->left != NULL)
				q.push(q.front()->left);
			if (q.front()->right != NULL)
				q.push(q.front()->right);
			q.pop();
		}
		return ret;
	}
};