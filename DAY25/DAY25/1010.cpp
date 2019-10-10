/*
��Ŀ����
����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
*/

/*
����˼·��
���ö������������������ --- ����
����ָ����Ϊ�����ǰ��ָ��
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