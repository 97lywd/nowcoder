/*
题目描述
在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,
并返回它的位置, 如果没有则返回 -1（需要区分大小写）.
*/
/*
用map记录每个字符出现的次数
遍历map找出第一个出现的坐标
*/

class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		map<char, int>m;
		for (int i = 0; i < str.size(); i++)
			m[str[i]]++;
		for (int i = 0; i < str.size(); i++)
		{
			if (m[str[i]] == 1)
				return i;
		}
		return -1;
	}
};