/*
��Ŀ����
����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�min������ʱ�临�Ӷ�ӦΪO��1������
*/

/*
��������ջs1,s2
s2�ȴ洢s1��һ�������Ԫ�أ�֮��ֻ������Լ�С������ȵ�Ԫ��
��ջʱ���s1��s2ջ��Ԫ�����
����s2--pop() ����s1 -- pop()
*/

class Solution {
public:
	stack<int>s1;
	stack<int>s2;
	void push(int value) {
		s1.push(value);
		if (s2.empty())
			s2.push(value);
		else if (value <= s2.top())
			s2.push(value);
	}
	void pop() {
		if (s1.top() == s2.top())
			s2.pop();
		s1.pop();
	}
	int top() {
		return s1.top();
	}
	int min() {
		return s2.top();
	}
};