/*
   ��Ŀ����:
��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
*/
// ����˼·������string �����ո� ֮����ַ��������ƶ������ռ�
//������%20

class Solution {
public:
	void replaceSpace(char *str, int length) {
		for (int i = 0; i < length; i++)
		{
			if (*(str + i) == ' ')
			{
				int j = length - 1;
				*(str + j + 3) = '\0';
				while (i < j)
				{
					*(str + j + 2) = *(str + j);
					j--;
				}
				*(str + i) = '%';
				*(str + i + 1) = '2';
				*(str + i + 2) = '0';
			}
		}
	}
};