//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x): val(x), left(NULL), right(NULL){}
//};
//
//���������
//int depth(TreeNode* root) {
//	if (root == NULL)  return  0;
//	int nleft = depth(root -> left);
//	int nright = depth(root -> right);
//	return (nleft > nright) ? nleft + 1 : nright + 1;
//}
//
//�������Ĳ�α��� �� ���� ���
//void cengci(TreeNode* root, int depth, vector <vector<int >> &ans) {
//	if (root == NULL)  return;
//	if (depth >= ans.size()) ans.push_back(vector<int> {});
//	ans[depth].push_back(root->val);
//	cengci(root->left,  depth + 1, ans);
//	cengci(root->right, depth + 1, ans);
//}
//void cAns(TreeNode* root) {
//	vector<vector<int>> ans;
//
//	cengci(root, 0, ans);
//
//	cout << "depth is:  " << ans.size() << endl;
//	for (int i = 0; i < ans.size(); i++) {
//		for (auto i : ans[i]) {
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//}
//
//�ж϶������Ƿ���ƽ�������������ж�
//int depth1(TreeNode* root) {
//	if (root == NULL)  return  0;
//
//	int nleft = depth1(root->left);
//	int nright = depth1(root->right);
//
//	if (abs(nleft - nright) > 1)  return -1;
//
//	if (nright == -1 || nleft == -1) {//�Ѿ��������ˣ� ֱ�ӷ���-1��
//		return -1;
//	}
//
//	return (nleft > nright) ? nleft + 1 : nright + 1;
//}

//void isBalanced(TreeNode* root) {
//	if (depth1(root) != -1)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}
//
//int main() {
//	TreeNode a(3);
//	TreeNode b(9);
//	TreeNode c(20);
//	TreeNode d(15);
//	TreeNode e(7);
//
//	a.left = &b;
//	a.right = &c;
//	c.left = &d;
//	c.right = &e;
//
//	cout << depth(&a) << endl;
//	cAns(&a);
//	isBalanced(&a);
//
//	return 0;
//}
//
