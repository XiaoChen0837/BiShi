//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string str;
//		cin >> str;
//		map<char, int> m;
//		int flag = 0;
//		int ans = 0;
//
//		while (flag < str.size() - 2) {
//			int tmp = flag;
//			for (int i = flag; i < str.size(); i++) {
//				if (str[i] == 's'){
//					if (m['w'] == 0 && m['r'] == 0) {
//						m['s']++;
//					}
//					else {
//						flag = i;
//					}
//				}
//				else if (str[i] == 'w') {
//					if (m['s'] != 0 && m['r'] == 0) {
//						m['w']++;
//					}
//					else {
//						continue;
//					}
//				}
//				else if (str[i] == 'r') {
//					if (m['s'] != 0 && m['w'] != 0) {
//						m['r']++;
//					}
//					else {
//						continue;
//					}
//				}
//				else {
//					continue;
//				}
//			}
//			if (flag == tmp) {
//				flag = str.size();
//			}
//			ans += m['s'] * m['r'] * m['w'];
//			m['s'] = 0;
//			m['r'] = 0;
//			m['w'] = 0;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}