/*
��Ŀ����
��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
��������:
����һ���ַ���,����������ĸ����,����Ϊ��
�������:
����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
*/


/*
����˼·��
	����������ϴ�ֵ��10+��ǰֵ
	�жϵ�ǰֵ�Ƿ�Ϸ������Ϸ�����0
	�ж�ֵstr[0]ʱ���ж��Ƿ��Ƿ��ţ����ж��Ƿ�����
*/



class Solution {
public:
	int StrToInt(string str) {
		long long ret = 0;
		for (int i = str.size() - 1; i >= 0; i--)
		{
			if (i == 0) {
				if (str[0] == '+') {
					if (ret > pow(2, 31) - 1)
						return 0;
					else
						return ret;
				}
				else if (str[0] == '-') {
					if (-ret < -(pow(2, 31)))
						return 0;
					else
						return -ret;
				}
				else if (str[i] >= '0' || str[i] <= '9') {
					ret += ((str[i] - '0') * pow(10, str.size() - i - 1));
					if (ret > pow(2, 31) - 1)
						return 0;
					else
						return ret;
				}
			}
			if (str[i] < '0' || str[i] > '9') {
				return 0;
			}
			ret += ((str[i] - '0') * pow(10, str.size() - i - 1));
		}
		return (int)ret;
	}
};
