/*
题目描述
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，
所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/

/*
新建一个数组，先尾插所有奇数
再尾插所有偶数
交换两个数组
*/

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> ret;
		for (int i = 0; i < array.size(); i++)
		{
			if (array[i] % 2 == 1)
				ret.push_back(array[i]);
		}
		for (int i = 0; i < array.size(); i++)
		{
			if (array[i] % 2 == 0)
				ret.push_back(array[i]);
		}
		array = ret;
	}
};