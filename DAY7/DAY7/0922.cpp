/*
题目描述
我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
*/

/*
解题思路：
  当n=1时，显然只有一种方法，直接竖放
  当n=2时，有两种方法，要么都竖着放，要么都横着放
  那么当n=3时，要么在n = 1的基础上新放置两个或者在n=2的基础上新放置一个
  所以我们可以得到状态方程  f(n) = f(n - 1) + f(n - 2)
  用数组记录第n个的方法数字 并初始化f(1) = 1,f(2) = 2;
  由于是数组，第0项初始化为0
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