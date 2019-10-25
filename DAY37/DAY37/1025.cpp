/*
题目描述
将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
输入描述:
输入一个字符串,包括数字字母符号,可以为空
输出描述:
如果是合法的数值表达则返回该数字，否则返回0
*/


/*
解题思路：
	逆序遍历，上次值乘10+当前值
	判断当前值是否合法，不合法返回0
	判断值str[0]时，判断是否是符号，在判断是否会溢出
*/



class Solution {
public:
	int StrToInt(string str) {
		long long ret = 0;
		for (int i = str.size() - 1; i >= 0; i--)
		{
			if (i == 0) {
				if (str[0] == '+') {
					if (ret > pow(2, 31) - 1)
						return 0;
					else
						return ret;
				}
				else if (str[0] == '-') {
					if (-ret < -(pow(2, 31)))
						return 0;
					else
						return -ret;
				}
				else if (str[i] >= '0' || str[i] <= '9') {
					ret += ((str[i] - '0') * pow(10, str.size() - i - 1));
					if (ret > pow(2, 31) - 1)
						return 0;
					else
						return ret;
				}
			}
			if (str[i] < '0' || str[i] > '9') {
				return 0;
			}
			ret += ((str[i] - '0') * pow(10, str.size() - i - 1));
		}
		return (int)ret;
	}
};
