/*
��Ŀ����
����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}��
�����������{4,7,2,1,5,3,8,6}�����ؽ������������ء�
*/

/*
����˼·��
 ����ǰ������������һ���ڵ��Ǹ��ڵ�
 ������������������������������ұ���������
 �õ�pre����ĵ�һλ������in���飬�ҵ����ڵ��±�
 �Ը��ڵ�����λ�ֽ磬�ֱ�õ���������������������������������
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		// int rootval = pre[0];
		vector<int>left_in, left_pre, right_in, right_pre;
		int rootIndex = 0;
		int size = vin.size();
		if (size == 0)
			return NULL;
		TreeNode* ret = new TreeNode(pre[0]);
		for (int i = 0; i < size; i++)
		{
			if (vin[i] == pre[0])
			{
				rootIndex = i;
				break;
			}
		}
		for (int i = 0; i < rootIndex; i++)
		{

			left_in.push_back(vin[i]);
			left_pre.push_back(pre[i + 1]);

		}
		for (int i = rootIndex + 1; i < size; i++)
		{
			right_in.push_back(vin[i]);
			right_pre.push_back(pre[i]);
		}

		ret->left = reConstructBinaryTree(left_pre, left_in);
		ret->right = reConstructBinaryTree(right_pre, right_in);
		return ret;
	}

};