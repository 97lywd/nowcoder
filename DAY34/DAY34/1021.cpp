/*
��Ŀ����
	дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�
*/

/*
����˼·��
	����num1<0,��ô���ǿ�����num2�Լ���
	   num2>0,���Ǿ���num2����
*/

class Solution {
public:
	int Add(int num1, int num2)
	{
		if (num1 == 0)
			return num2;
		else if (num1 < 0) {
			while (num1 != 0) {
				num1++;
				num2--;
			}
		}
		else {
			while (num1 != 0) {
				num1--;
				num2++;
			}
		}
		return num2;
	}
};