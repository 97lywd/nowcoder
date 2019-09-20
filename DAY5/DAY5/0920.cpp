/*
题目描述：
一只青蛙一次可以跳上1级台阶，也可以跳上2级。
求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/


/*

解题思路：
假设当前要跳到n层台阶，那么要么在n-1层跳一次，要么在n-1层一次跳两层
那么对于第n层，一共就有f(n - 1) + f(n - 2)种跳法
相当于一个Fibonacci数列的求法
所以初始值将第一项 第二项设为1 一次循环求出第n阶的跳法
*/


class Solution {
public:
	int jumpFloor(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;
		unsigned int f1 = 1;
		unsigned int f2 = 1;
		unsigned int result = 0;
		for (unsigned int i = 2; i <= number; i++)
		{
			result = f1 + f2;
			f1 = f2;
			f2 = result;
		}
		return result;
	}
};