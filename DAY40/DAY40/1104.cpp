/*
题目描述
输入一个递增排序的数组和一个数字S，在数组中查找两个数，
使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
输出描述:
对应每个测试案例，输出两个数，小的先输出。
*/

/*
解题思路：
	双指针，一个指向头，一个指向尾，如果当前两个指向值和是S，
	那么保存这两个指向的值，由于是递增序列，所以越向中间靠拢
	乘积越大，所以第一次相等时，就是最小的
*/

class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		int fast = array.size() - 1;
		int slow = 0;
		vector<int> ret;
		if (array.size() == 0)
			return ret;
		while (slow < fast) {
			int total = array[slow] + array[fast];
			if (total == sum)
			{
				ret.push_back(array[slow]);
				ret.push_back(array[fast]);
				return ret;
			}
			else if (total < sum)
				slow++;
			else {
				fast--;
			}
		}
		return ret;
	}
};