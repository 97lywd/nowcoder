/*
��Ŀ����
����һ���������飬ʵ��һ�����������������������ֵ�˳��
ʹ�����е�����λ�������ǰ�벿�֣�
���е�ż��λ������ĺ�벿�֣�
����֤������������ż����ż��֮������λ�ò��䡣
*/

/*
�½�һ�����飬��β����������
��β������ż��
������������
*/

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> ret;
		for (int i = 0; i < array.size(); i++)
		{
			if (array[i] % 2 == 1)
				ret.push_back(array[i]);
		}
		for (int i = 0; i < array.size(); i++)
		{
			if (array[i] % 2 == 0)
				ret.push_back(array[i]);
		}
		array = ret;
	}
};