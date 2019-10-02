/*
��Ŀ����
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
*/

/*
����˼·��
���ַ��ı���
��ת���������һ���ص� ǰ��� ����С 
�������������е� ������ߺ����ұߺ�mid��ȵĽ��
����midλ��
*/


class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.empty())
			return 0;
		int left = 0;
		int right = rotateArray.size() - 1;
		while (left < right)
		{
			if (rotateArray[left] < rotateArray[right])
				return rotateArray[left];
			int mid = left + (right - left) / 2;
			if (rotateArray[left] < rotateArray[mid])
				left = mid + 1;
			else if (rotateArray[mid] < rotateArray[right])
				right = mid;
			else
				left++;
		}
		return rotateArray[left];
	}
};