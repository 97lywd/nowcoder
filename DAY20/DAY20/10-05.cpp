/*
题目描述
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和
中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
*/

/*
解题思路：
 对于前序遍历结果：第一个节点是根节点
 对于中序遍历结果：左边是左子树，右边是右子树
 拿到pre数组的第一位，遍历in数组，找到根节点下标
 以根节点坐标位分界，分别得到左子树和右子树的先序与中序遍历结果
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