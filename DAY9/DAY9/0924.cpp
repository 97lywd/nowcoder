
/*
题目描述
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

保证base和exponent不同时为0
*/
/*
考察的是数学知识
base = 0 那么所求值也是0
exponent = 0 那么所求值是1
exponent < 0 那么相当于给base的倒数求次方
*/

class Solution {
public:
	double Power(double base, int exponent) {
		double ret = 1.0;
		if (base == 0)
			return 0;
		else if (exponent == 0)
			return 1;
		else if (exponent < 0)
			base = 1.0 / base;

		while (exponent)
		{
			ret *= base;
			exponent = (exponent > 0) ? (--exponent) : (++exponent);
		}
		return ret;
	}

};