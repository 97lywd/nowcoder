/*
��Ŀ����
����һ���������飬
�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No���������������������������ֶ�������ͬ��
*/

/*
����˼·��
1.�������������ص㣺�������ȸ��ڵ�С���������ȸ��ڵ��
2.����������ص㣺���һ���ڵ��Ǹ��ڵ�
���ǣ����ǿ��Խ�ʣ�µĽڵ��Ϊ�����֣������һ��Ԫ�ش�ĺͱ���С��
���εݹ�������Ϊ�գ�����������������ʣ����Ƕ����������ĺ���������
*/

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		int index = sequence.size() - 1;
		if (sequence.size() == 0)
			return false;
		int root = sequence[sequence.size() - 1];
		for (int i = 0; i < sequence.size(); i++)
		{
			if (sequence[i] > root)
			{
				index = i;
				break;
			}
		}
		vector<int>left, right;
		for (int i = 0; i < index; i++)
		{
			left.push_back(sequence[i]);
		}
		for (int i = index; i < sequence.size() - 1; i++)
		{
			if (sequence[i] > root)
				right.push_back(sequence[i]);
			else
				return false;
		}
		bool l = true;
		bool r = true;
		if (left.size() != 0)
			l = VerifySquenceOfBST(left);
		if (right.size() != 0)
			r = VerifySquenceOfBST(right);
		return (l&&r);
	}
};