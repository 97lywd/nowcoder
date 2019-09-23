/*
题目描述
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/

/*
解题思路：
   在32位系统上，一个int 即32位
   我们可以让一个数依次右移至32次
   和1做&运算 如果该位为1 则为1  为0 则为0  
   并让计数器做记录
*/

class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((n >> i) & 1 == 1)
			{
				count++;
			}
		}
		return count;
	}
};