/*
��Ŀ����
��ֻ����������2��3��5��������������Ugly Number����
����6��8���ǳ�������14���ǣ���Ϊ������������7��
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������
*/

/*
����˼·��
	��index<6,��ζ����������ǳ���
	�ص������Ķ��壬ֻҪ����2��3��5����һ���������ǳ���
	��ôֻ��Ҫ�õ�һ������2��3��5��С��һ������

*/

class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index < 7)
			return index;
		vector<int> ret;
		int num = 1;
		ret.push_back(num);
		int p2 = 0, p3 = 0, p5 = 0;
		while (ret.size() < index)
		{
			num = min(ret[p2] * 2, min(ret[p3] * 3, ret[p5] * 5));
			if (num == ret[p2] * 2) p2++;
			if (num == ret[p3] * 3) p3++;
			if (num == ret[p5] * 5) p5++;
			ret.push_back(num);
		}
		return num;
	}
};