/*
��Ŀ����
��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�
ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�
*/

/*
����˼·��
	�ж��������������������������� ���� �������������������������� �Ƿ���ȼ���

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