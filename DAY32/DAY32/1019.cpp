/*
��Ŀ����
����һ�ö����������������ȡ�
�Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·����
�·���ĳ���Ϊ������ȡ�
*/


/*
����˼·��
	�����������������ߵ�Ҷ�ӽڵ㣬���ľ��Ƕ������߶�
*/


class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int leftH = TreeDepth(pRoot->left);
		int rightH = TreeDepth(pRoot->right);
		return (leftH > rightH) ? leftH + 1 : rightH + 1;
	}
};