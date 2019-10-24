/*
题目描述
牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，
写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
有一天他向Fish借来翻看，但却读不懂它的意思。
例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
正确的句子应该是“I am a student.”。
Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？

*/

/*

解题思路：
	先整体逆转  student. a am I --->  I ma a .tneduts
	在局部逆转  I ma a .tneduts --->  I am a  student.
*/


class Solution {
public:
	string ReverseSentence(string str) {
		if (str.size() == 0)
			return str;
		int len = str.size() - 1;
		Rever(str, 0, len);

		for (int l = 0, r = 0; r <= len + 1;) {//l设为每个单词开头，r设为每个单词后的空格位置
			if (r <= len && str[r] != ' ')r++;//没有到达末尾或者遇到空格
			else {//遇到空格或者到末尾
				Rever(str, l, r - 1);
				l = ++r;
			}
		}
		return str;
	}

	string Rever(string& str, int left, int right) {
		while (left < right) {
			swap(str[left], str[right]);
			right--;
			left++;
		}
		return str;
	}
};