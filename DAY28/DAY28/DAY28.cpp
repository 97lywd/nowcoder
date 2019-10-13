/*
题目描述
输入一个正整数数组，把数组里所有数字拼接起来排成一个数，
打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，
则打印出这三个数字能排成的最小数字为321323。
*/

/*
解题思路：
对于string str1， string str2
若str1 + str2 > str2 + str1
则str1 > str2
利用上述结论我们将数组里排序即可
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