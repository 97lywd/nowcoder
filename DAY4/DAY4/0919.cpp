/*
��Ŀ����
��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0��Ϊ0����
n<=39
*/

/*
����˼·��
  ����һ������ret����쳲��������У���ʼֵ��ret[0] = 0; ret[1] = 1;
  ��n��쳲��������� == ret[n] = ret[n - 1] + ret[n - 2]
*/

class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 0)
		{
			return 0;
		}
		if (n == 1 || n == 2) {
			return 1;
		}
		int *ret = new int[n + 1];
		ret[0] = 0;
		ret[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			ret[i] = ret[i - 1] + ret[i - 2];
		}
		return ret[n];
		delete[]ret;
	}
};