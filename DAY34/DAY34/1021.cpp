/*
题目描述
	写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。
*/

/*
解题思路：
	假设num1<0,那么我们可以让num2自减；
	   num2>0,我们就让num2自增
*/

class Solution {
public:
	int Add(int num1, int num2)
	{
		if (num1 == 0)
			return num2;
		else if (num1 < 0) {
			while (num1 != 0) {
				num1++;
				num2--;
			}
		}
		else {
			while (num1 != 0) {
				num1--;
				num2++;
			}
		}
		return num2;
	}
};