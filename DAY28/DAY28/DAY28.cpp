/*
��Ŀ����
����һ�����������飬����������������ƴ�������ų�һ������
��ӡ��ƴ�ӳ���������������С��һ����������������{3��32��321}��
���ӡ���������������ųɵ���С����Ϊ321323��
*/

/*
����˼·��
����string str1�� string str2
��str1 + str2 > str2 + str1
��str1 > str2
���������������ǽ����������򼴿�
*/

class Solution {
public:
	static bool compare(const string& str1, const string& str2) {
		return str1 + str2 < str2 + str1;
	}
	string PrintMinNumber(vector<int> numbers) {
		vector<string> vt;
		string ret;
		for (int i = 0; i < numbers.size(); i++)
			vt.push_back(to_string(numbers[i]));
		sort(vt.begin(), vt.end(), compare);
		for (int i = 0; i < vt.size(); i++)
			ret += vt[i];
		return ret;
	}
};