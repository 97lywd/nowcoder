/*
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/

/*
解题思路：
对于第n层，可以是n - 1层跳一层，n - 2层跳n层......第1层跳n - 1层
所以对于f(n) = f(n - 1) + f(n - 2) + ....f(1) 
        f(n - 1) = f(n - 2) + f(n - 3) + ....f(1)
	可得f(n) = 2 * f(n - 1)
	初始化 f(1) = 1
*/

class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0)
			return 0;
		int ret = 1;
		for (int i = 1; i < number; i++)
		{
			ret *= 2;
		}
		return ret;
	}
};