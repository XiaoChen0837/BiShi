//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<pair<int, int>> nums;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		nums.emplace_back(a, b);
//	}
//
//	vector<int> up;
//	vector<int> down;
//
//	int idx = 0;
//	while (1) {
//		if (nums[idx].second == 1 && idx < nums.size()) {
//			up.push_back(nums[idx].first);
//			++idx;
//		}
//		else {
//			break;
//		}
//	}
//	while (1) {
//		if (idx < nums.size()) {
//			down.push_back(nums[idx].first);
//			++idx;
//		}
//		else {
//			break;
//		}
//	}
//
//	if (down.size() == n) {
//		cout << nums.back().first << endl;
//	}
//	else {
//		vector<int> res;
//		vector<bool> flag(n + 1, false);
//		for (auto i : up) {
//			flag[i] = true;
//		}
//		for (int i = 0; i < down.size(); i++) {
//			flag[down[i]] ==true;
//		}
//
//		for (int i = 1; i < flag.size(); i++) {
//			if (!flag[i]) {
//				res.push_back(i);
//			}
//		}
//		for (auto i : res) {
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int  main() {
//	string str;
//	while (cin >> str) {
//		vector<bool> flags(5, false);
//		for (auto i : str) {
//			if (isdigit(i)) {
//				flags[0] = true;
//			}
//			else if (i >= 'a' && i <= 'z') {
//				flags[1] = true;
//			}
//			else if (i >= 'A' && i <= 'Z') {
//				flags[2] = true;
//			}
//			else {
//				flags[3] = true;
//			}
//		}
//		if (str.length() >= 8) {
//			flags[4] = true;
//		}
//		bool flag = true;
//		for (bool f : flags) {
//			if (!f) {
//				flag = false;
//			}
//		}
//		if (flag)  cout << "OK" << endl;
//		else cout << "Irregular password" << endl;
//	}
//	return 0;
//}


//int main() {
//	int n, m;
//	cin >> n >> m;
//	map<int, int>  M;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		if (b == 1) {
//			M[a]++;
//		}
//		else if (b == 0) {
//			M[a]--;
//		}
//	}
//	vector<int> ans;
//	for (int i = 1; i <= n; i++) {
//		if (M[i] == 0) ans.push_back(i);
//	}
//	for (int i = 0; i < ans.size(); i++) {
//		cout << ans[i] << " ";
//	}
//	cout << endl;
//	return 0; 
//}