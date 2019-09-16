/*
   题目描述:
请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/
// 解题思路：遍历string 碰到空格 之后的字符串整体移动三个空间
//随后插入%20

class Solution {
public:
	void replaceSpace(char *str, int length) {
		for (int i = 0; i < length; i++)
		{
			if (*(str + i) == ' ')
			{
				int j = length - 1;
				*(str + j + 3) = '\0';
				while (i < j)
				{
					*(str + j + 2) = *(str + j);
					j--;
				}
				*(str + i) = '%';
				*(str + i + 1) = '2';
				*(str + i + 2) = '0';
			}
		}
	}
};