/*
题目描述
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。
n<=39
*/

/*
解题思路：
  定义一个数组ret保存斐波那契数列，初始值：ret[0] = 0; ret[1] = 1;
  第n项斐波那契数列 == ret[n] = ret[n - 1] + ret[n - 2]
*/

class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 0)
		{
			return 0;
		}
		if (n == 1 || n == 2) {
			return 1;
		}
		int *ret = new int[n + 1];
		ret[0] = 0;
		ret[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			ret[i] = ret[i - 1] + ret[i - 2];
		}
		return ret[n];
		delete[]ret;
	}
};