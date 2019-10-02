/*
��Ŀ����
��һ����ά�����У�ÿ��һά����ĳ�����ͬ����
ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
*/

/*
����˼·��
��Ϊ������������������󣬴��µ������μ�С
�������Ǵ����½ǿ�ʼѰ��
�����targetС��ȥ��һ����
�����target����ȥ��һ����
ֱ���ҵ����Ͻ�
*/

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int row = array.size();
		int col = array[0].size();
		int i = row - 1;
		int j = 0;
		while (i >= 0 && j < col) {

			if (array[i][j] == target)
				return true;
			if (array[i][j] > target)
			{
				i--;
				continue;
			}
			if (array[i][j] < target)
			{
				j++;
				continue;
			}
		}
		return false;
	}
};