/*
��Ŀ����
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
*/

/*
����˼·��
    ����һ�������¼ÿ��Ԫ�س��ֵĴ���
	����ٱ�����������жϴ����Ƿ���� size / 2
*/

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		vector<int> vt(10, 0);
		int ret = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			vt[numbers[i]]++;
		}
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i] > (numbers.size() / 2))
			{
				ret = i;
				break;
			}
		}
		return ret;
	}
};