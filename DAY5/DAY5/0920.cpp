/*
��Ŀ������
һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
*/


/*

����˼·��
���赱ǰҪ����n��̨�ף���ôҪô��n-1����һ�Σ�Ҫô��n-1��һ��������
��ô���ڵ�n�㣬һ������f(n - 1) + f(n - 2)������
�൱��һ��Fibonacci���е���
���Գ�ʼֵ����һ�� �ڶ�����Ϊ1 һ��ѭ�������n�׵�����
*/


class Solution {
public:
	int jumpFloor(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;
		unsigned int f1 = 1;
		unsigned int f2 = 1;
		unsigned int result = 0;
		for (unsigned int i = 2; i <= number; i++)
		{
			result = f1 + f2;
			f1 = f2;
			f2 = result;
		}
		return result;
	}
};