/*
题目描述
定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
*/

/*
定义两个栈s1,s2
s2先存储s1第一个插入的元素，之后只插入比自己小或者相等的元素
出栈时如果s1，s2栈顶元素相等
则让s2--pop() 负责s1 -- pop()
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