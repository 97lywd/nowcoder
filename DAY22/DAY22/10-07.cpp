/*
题目描述
输入一个整数数组，
判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
*/

/*
解题思路：
1.二叉搜索树的特点：左子树比根节点小，右子树比根节点大
2.后序遍历的特点：最后一个节点是根节点
于是，我们可以将剩下的节点分为两部分，比最后一个元素大的和比它小的
依次递归至数组为空，如果均满足上述性质，则是二叉搜索树的后序遍历结果
*/

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		int index = sequence.size() - 1;
		if (sequence.size() == 0)
			return false;
		int root = sequence[sequence.size() - 1];
		for (int i = 0; i < sequence.size(); i++)
		{
			if (sequence[i] > root)
			{
				index = i;
				break;
			}
		}
		vector<int>left, right;
		for (int i = 0; i < index; i++)
		{
			left.push_back(sequence[i]);
		}
		for (int i = index; i < sequence.size() - 1; i++)
		{
			if (sequence[i] > root)
				right.push_back(sequence[i]);
			else
				return false;
		}
		bool l = true;
		bool r = true;
		if (left.size() != 0)
			l = VerifySquenceOfBST(left);
		if (right.size() != 0)
			r = VerifySquenceOfBST(right);
		return (l&&r);
	}
};