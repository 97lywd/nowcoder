/*
题目描述
在一个二维数组中（每个一维数组的长度相同），
每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/

/*
解题思路：
因为数组从左往右依次增大，从下到上依次减小
所以我们从左下角开始寻找
如果比target小则去上一行找
如果比target大则去下一列找
直至找到右上角
*/

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int row = array.size();
		int col = array[0].size();
		int i = row - 1;
		int j = 0;
		while (i >= 0 && j < col) {

			if (array[i][j] == target)
				return true;
			if (array[i][j] > target)
			{
				i--;
				continue;
			}
			if (array[i][j] < target)
			{
				j++;
				continue;
			}
		}
		return false;
	}
};