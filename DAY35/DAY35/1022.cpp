/*

��Ŀ����
�����������һ����λָ�����ѭ�����ƣ�ROL����
�����и��򵥵����񣬾������ַ���ģ�����ָ�����������
����һ���������ַ�����S���������ѭ������Kλ������������
���磬�ַ�����S=��abcXYZdef��,Ҫ�����ѭ������3λ��Ľ����
����XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����
*/

/*
����˼·��
	��ԭ�ַ����β��ǰnλ����ɾ��ǰnλ
*/

class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (n == 0 || n == str.size())
			return str;
		int count = 0;
		while (count != n)
		{
			str.push_back(str[count]);
			count++;
		}
		str.erase(str.begin(), str.begin() + count);
		return str;
	}
};