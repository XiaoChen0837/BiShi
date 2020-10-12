//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <mutex>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
//	return a.first < b.first;
//}
//
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	vector<pair<int, int>> p;
//	vector<pair<int, int>> w;
//	vector<pair<int, int>> v;
//	for (int i = 0; i < n; i++) {
//		int P, W, V;
//		cin >> P >> W >> V;
//		p.emplace_back(P, i);
//		w.emplace_back(W, i);
//		v.emplace_back(V, i);
//	}
//	int  ans1 = 0;
//	int  ans2 = 0;
//
//	int K = 0;
//	int M = 0;
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i < n; i++) {
//		
//		if (v[i] == v[i + 1]) {
//			
//		}
//
//		K += p[v[i].second].first;
//		M += w[v[i].second].first;
//		if (K > k || M > m) {
//			break;
//		}
//		else {
//			ans1++;
//		}
//	}
//	cout << ans1 << endl;


	//K = 0;
	//M = 0;
	//sort(p.begin(), p.end(), cmp);
	//for (int i = 0; i < n; i++) {
	//	K += p[i].first;
	//	M += w[p[i].second].first;
	//	if (K > k || M > m) {
	//		break;
	//	}
	//	else {
	//		ans1++;
	//	}
	//}

	//int M = 0;
	//int K = 0;
	//sort(w.begin(), w.end(), cmp);
	//for (int i = 0; i < n; i++) {
	//	M += w[i].first;
	//	K += p[w[i].second].first;
	//	if (M > m || K > k) {
	//		break;
	//	}
	//	else {
	//		ans2++;
	//	}
	//}
	//cout << min(ans1, ans2) << endl;
	//return 0;
//}




//int main() {
//	int x, y;
//	cin >> x >> y;
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == 'L') {
//			x += -1;
//		}
//		else if (str[i] == 'R') {
//			x += 1;
//		}
//		else if (str[i] == 'U') {
//			y += 1;
//		}
//		else if (str[i] == 'D') {
//			y += -1;
//		}
//	}
//	cout << x << " " << y << endl;
//	return 0;
//}