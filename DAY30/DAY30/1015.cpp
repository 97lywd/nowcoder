/*
��Ŀ����
��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,
����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��.
*/
/*
��map��¼ÿ���ַ����ֵĴ���
����map�ҳ���һ�����ֵ�����
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