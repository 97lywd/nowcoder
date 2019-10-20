/*
题目描述
把只包含质因子2、3和5的数称作丑数（Ugly Number）。
例如6、8都是丑数，但14不是，因为它包含质因子7。
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
*/

/*
解题思路：
	当index<6,意味着这个数就是丑数
	回到丑数的定义，只要包含2，3，5任意一个的数即是丑数
	那么只需要拿到一个数乘2，3，5最小的一个即可

*/

class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index < 7)
			return index;
		vector<int> ret;
		int num = 1;
		ret.push_back(num);
		int p2 = 0, p3 = 0, p5 = 0;
		while (ret.size() < index)
		{
			num = min(ret[p2] * 2, min(ret[p3] * 3, ret[p5] * 5));
			if (num == ret[p2] * 2) p2++;
			if (num == ret[p3] * 3) p3++;
			if (num == ret[p5] * 5) p5++;
			ret.push_back(num);
		}
		return num;
	}
};