/*
��Ŀ����
ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��
дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ��
��һ������Fish������������ȴ������������˼��
���磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
��ȷ�ľ���Ӧ���ǡ�I am a student.����
Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��

*/

/*

����˼·��
	��������ת  student. a am I --->  I ma a .tneduts
	�ھֲ���ת  I ma a .tneduts --->  I am a  student.
*/


class Solution {
public:
	string ReverseSentence(string str) {
		if (str.size() == 0)
			return str;
		int len = str.size() - 1;
		Rever(str, 0, len);

		for (int l = 0, r = 0; r <= len + 1;) {//l��Ϊÿ�����ʿ�ͷ��r��Ϊÿ�����ʺ�Ŀո�λ��
			if (r <= len && str[r] != ' ')r++;//û�е���ĩβ���������ո�
			else {//�����ո���ߵ�ĩβ
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