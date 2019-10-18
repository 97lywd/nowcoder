/*
��Ŀ����
����һ�ö��������жϸö������Ƿ���ƽ���������
*/
/*
����˼·��
	AVL�����ص��������߶�֮�����ֵ<=1
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