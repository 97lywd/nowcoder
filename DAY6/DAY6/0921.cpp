/*
��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
*/

/*
����˼·��
���ڵ�n�㣬������n - 1����һ�㣬n - 2����n��......��1����n - 1��
���Զ���f(n) = f(n - 1) + f(n - 2) + ....f(1) 
        f(n - 1) = f(n - 2) + f(n - 3) + ....f(1)
	�ɵ�f(n) = 2 * f(n - 1)
	��ʼ�� f(1) = 1
*/

class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0)
			return 0;
		int ret = 1;
		for (int i = 1; i < number; i++)
		{
			ret *= 2;
		}
		return ret;
	}
};