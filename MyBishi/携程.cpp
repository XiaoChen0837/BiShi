//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	unordered_map <char, char> mp;
//	for (int i = 0; i < 13; i++) {
//		mp['a' + i] = 'z' - i;
//	}
//	for (int i = 0; i < 13; i++) {
//		mp['z' - i] = 'a' + i;
//	}
//	unordered_set<char> s;
//
//	for (auto i : str) {
//		if (s.find(i) == s.end()) {
//			s.emplace(i);
//		}
//	}
//	int res = 0;
//	for (auto i : str) {
//		if (s.find(mp[i]) != s.end()) {
//			++res;
//			mp.erase(i);
//		}
//	}
//
//	cout << res / 2 << endl;
//
//	return 0;
//}
