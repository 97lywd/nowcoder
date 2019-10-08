/*
��Ŀ����
����һ�Ŷ������ĸ��ڵ��һ��������
��ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
*/

/*
����˼·��
    ��ʵ�������DFS��˼·������Ҫһ������������·��
	���������Ŀ�����������������뷵�صĶ�ά����
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