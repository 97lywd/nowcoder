/*
��Ŀ����
����n���������ҳ�������С��K������
��������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��
*/

/*
����˼·��
��ԭ���������ó�ǰk��
*/

class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector<int> vt;
		if (input.empty() || k > input.size())
			return vt;
		sort(input.begin(), input.end());
		for (int i = 0; i < k; i++)
			vt.push_back(input[i]);
		return vt;
	}
};