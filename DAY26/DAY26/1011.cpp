/*
题目描述
数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
*/

/*
解题思路：
    创建一个数组记录每个元素出现的次数
	最后再遍历这个数组判断次数是否大于 size / 2
*/

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		vector<int> vt(10, 0);
		int ret = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			vt[numbers[i]]++;
		}
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i] > (numbers.size() / 2))
			{
				ret = i;
				break;
			}
		}
		return ret;
	}
};