/*
��Ŀ����
�������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
*/

/*
����˼·��
�����������ڵ㿪ʼ�Ƚϣ�����ȣ�
������ж������������ȣ��ж�����
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