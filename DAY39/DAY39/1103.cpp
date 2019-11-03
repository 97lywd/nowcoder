/*
	��Ŀ����
С����ϲ����ѧ,��һ����������ѧ��ҵʱ,
Ҫ������9~16�ĺ�,�����Ͼ�д������ȷ����100��
���������������ڴ�,�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22��
���ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
*/

/*
����˼·��
	��������˼·��˫ָ�룬��Ϊ�Ȳ��������ʣ������жϿ���ָ��������
				���Ƿ����sum��������ڣ���ô��������������������
				�������С�������ڣ���ָ�������ߣ�������ָ����ǰ��
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