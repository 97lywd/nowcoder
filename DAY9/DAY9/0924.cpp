
/*
��Ŀ����
����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���

��֤base��exponent��ͬʱΪ0
*/
/*
���������ѧ֪ʶ
base = 0 ��ô����ֵҲ��0
exponent = 0 ��ô����ֵ��1
exponent < 0 ��ô�൱�ڸ�base�ĵ�����η�
*/

class Solution {
public:
	double Power(double base, int exponent) {
		double ret = 1.0;
		if (base == 0)
			return 0;
		else if (exponent == 0)
			return 1;
		else if (exponent < 0)
			base = 1.0 / base;

		while (exponent)
		{
			ret *= base;
			exponent = (exponent > 0) ? (--exponent) : (++exponent);
		}
		return ret;
	}

};