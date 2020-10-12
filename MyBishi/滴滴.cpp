//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;

//k个一组字符串反转
//string reKstr(string s, int k) {
//	if ((int)s.size() < k) {
//		reverse(s.begin(), s.end());
//		return s;
//	}
//	string str1 = s.substr(0, k);
//	reverse(str1.begin(), str1.end());
//	return  str1 + reKstr(s.substr(k), k);
//}
//
//int  main() {
//	int k;
//	cin >> k;
//	cin.ignore();
//	string s;
//	getline(cin, s);
//	cout << reKstr(s, k) << endl;
//	return  0;
//}