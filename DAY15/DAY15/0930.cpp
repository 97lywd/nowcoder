/*
��Ŀ����
���������Ķ�����������任ΪԴ�������ľ���
*/

/*
����˼·��
�Ӹ��ڵ㿪ʼ ���������ӽڵ�
�ٽ�������Ľڵ�ֱ���Ϊ���ڵ㣬�����ǵ��ӽڵ���н���
���ɵõ����������
*/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == nullptr)
			return;
		TreeNode *tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};