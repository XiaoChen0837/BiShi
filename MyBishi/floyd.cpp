//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <queue>
//
//using namespace std;
//
///*
//1 - n�� n�������ӵ�һ����ʼȡ����һ��˳��ȡ��������һ����������һ������һ������ȡk����
//*/
//
////int main() {
////	int n, k;
////	cin >> n >> k;
////	deque<int> ans;
////	for (int i = 1; i <= n; i++) {
////		int t = n - k + 1;
////		if (i <= t) {
////			ans.push_front(i);
////		}
////		else {
////			ans.push_back(i);
////		}
////	}
////	for (auto idx : ans) {
////		cout << idx << " ";
////	}
////	cout << endl;
////	return 0;
////}
//
///*
//floyd�㷨
//
//n�����У�m��˫��·��
//x  y  l  l��x��y�ľ���
//q��ѯ��  a , b;
//���a b �ľ������·����
//
//5 3 3
//1 2 1
//2 3 1
//3 5 2
//1 2
//2 4
//1 5
//*/
//
//int main() {
//	const int INF = 1e9;
//	int n, m, q;
//	cin >> n >> m >> q;
//	vector < vector<int> > dp(n + 1, vector<int>(n + 1, INF));
//	for (int i = 0; i < n; i++) {
//		dp[i][i] = 0;
//	}
//	for (int i = 0; i < m; i++) {
//		int x, y, l;
//		cin >> x >> y >> l;
//		dp[x][y] = min(dp[x][y], l);
//	}
//
//	//floyd()
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
//			}
//		}
//	}
//
//	while (q--) {
//		int a, b;
//		cin >> a >> b;
//		if (dp[a][b] != INF)  cout << dp[a][b] << endl;
//		else  cout << -1 << endl;
//	}
//	return 0;
//}