/*
	题目描述
小明很喜欢数学,有一天他在做数学作业时,
要求计算出9~16的和,他马上就写出了正确答案是100。
但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。
没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。
现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!
*/

/*
解题思路：
	滑动窗口思路：双指针，因为等差数列性质，我们判断快慢指针区间内
				和是否等于sum，如果等于，那么这个区间就是满足条件的
				连续序列。如果大于，快指针往后走，否则，慢指针往前走
*/


class Solution {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		int fast = 2;
		int slow = 1;
		vector<vector<int>> res;
		while (slow < fast) {
			int cur = (fast + slow) * (fast - slow + 1) / 2;
			if (cur < sum)
				fast++;
			if (cur == sum) {
				vector<int> ret;
				for (int i = slow; i <= fast; i++) {
					ret.push_back(i);
				}
				res.push_back(ret);
				slow++;
			}
			if (cur > sum) {
				slow++;
			}
		}
		return res;
	}
};