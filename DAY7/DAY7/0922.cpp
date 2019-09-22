/*
��Ŀ����
���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
*/

/*
����˼·��
  ��n=1ʱ����Ȼֻ��һ�ַ�����ֱ������
  ��n=2ʱ�������ַ�����Ҫô�����ŷţ�Ҫô�����ŷ�
  ��ô��n=3ʱ��Ҫô��n = 1�Ļ������·�������������n=2�Ļ������·���һ��
  �������ǿ��Եõ�״̬����  f(n) = f(n - 1) + f(n - 2)
  �������¼��n���ķ������� ����ʼ��f(1) = 1,f(2) = 2;
  ���������飬��0���ʼ��Ϊ0
*/

class Solution {
public:
	int rectCover(int number) {
		if (number <= 0) {
			return 0;
		}
		else if (number == 1) {
			return 1;
		}
		else if (number == 2) {
			return 2;
		}
		vector<int> a;
		a.push_back(0);
		a.push_back(1);
		a.push_back(2);
		for (int i = 3; i <= number; i++) {
			int s = a[i - 1] + a[i - 2];
			a.push_back(s);
		}
		return a[number];
	}
};