//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <mutex>
//#include <map>
//#include <queue>
//
//using namespace std;

//int main()
//{
//	cout << "这里开始换行，字符串转数字" << endl;
//	std::string str = "255";
//	int sum = 0, sum1 = 0;
//	sum = atoi(str.c_str());
//	cout << sum << endl;
//
//	for (int i = 0; isdigit(str[i]) && i < str.length(); i++) {
//		int j = str[i] - '0';
//		sum1 = sum1 * 10 + j;
//	}
//	cout << sum1 << endl;
//

//	cout << "这里开始，合法的IP地址" << endl;
//
//	string  ip = "192.168.001.001";
//
//	if (ip.size()== 0 || ip.size() < 7  || ip.size() > 15 ) {
//		cout << "false" << endl;
//		return 0;
//	}
//
//	int a = ip.find('.');
//	string aa = ip.substr(0, a);
//	for (auto aaa : aa) {
//		if (!isdigit(aaa)) {
//			cout << "false" << endl;
//			return 0;
//		}
//	}
//	int ip1 = atoi(aa.c_str());
//
//	int b = ip.find('.', a + 1);
//	string bb = ip.substr(a + 1, b - a - 1);
//	for (auto bbb : bb) {
//		if (!isdigit(bbb)) {
//			cout << "false" << endl;
//			return 0;
//		}
//	}
//	int ip2 = atoi(bb.c_str());
//
//	int c = ip.find('.', b + 1);
//	string cc = ip.substr(b + 1, c - b - 1);
//	for (auto ccc : cc) {
//		if (!isdigit(ccc)) {
//			cout << "false" << endl;
//			return 0;
//		}
//	}
//	int ip3 = atoi(cc.c_str());
//
//	string dd = ip.substr(c + 1);
//	for (auto ddd : dd) {
//		if (!isdigit(ddd)) {
//			cout << "false" << endl;
//			return 0;
//		}
//	}
//	int ip4 = atoi(dd.c_str());
//
//
//	if (!(1 <= ip1 && ip1 <= 255 && 0 <= ip2 && ip2 <= 255 && 0 <= ip3 && ip3 <= 255 && 0 <= ip4 && ip4 <= 255))
//		cout << "false" << endl;
//	else cout << "true" << endl;
//
//	return 0;
//}