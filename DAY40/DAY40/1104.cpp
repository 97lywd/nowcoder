/*
��Ŀ����
����һ����������������һ������S���������в�����������
ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
�������:
��Ӧÿ�����԰����������������С���������
*/

/*
����˼·��
	˫ָ�룬һ��ָ��ͷ��һ��ָ��β�������ǰ����ָ��ֵ����S��
	��ô����������ָ���ֵ�������ǵ������У�����Խ���м俿£
	�˻�Խ�����Ե�һ�����ʱ��������С��
*/

class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		int fast = array.size() - 1;
		int slow = 0;
		vector<int> ret;
		if (array.size() == 0)
			return ret;
		while (slow < fast) {
			int total = array[slow] + array[fast];
			if (total == sum)
			{
				ret.push_back(array[slow]);
				ret.push_back(array[fast]);
				return ret;
			}
			else if (total < sum)
				slow++;
			else {
				fast--;
			}
		}
		return ret;
	}
};