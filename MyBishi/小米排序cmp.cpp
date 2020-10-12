//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//
//
/////*请完成下面这个函数，实现题目要求的功能
////当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
////******************************开始写代码******************************/
////vector < int > pathInZigZagTree(int label) {
////	int level = log(label) / log(2) + 1;
////	vector<int> path(level);
////	while (label) {
////		path[level - 1] = label;
////		label = pow(2, level) - 1 - label + pow(2, level - 1);
////		label >>= 1;
////		level--;
////	}
////	return  path;
////
////}
/////******************************结束写代码******************************/
////
////
////int main() {
////	vector < int > res;
////
////	int _label;
////	cin >> _label;
////	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
////
////
////
////	res = pathInZigZagTree(_label);
////	for (int res_i = 0; res_i < res.size(); res_i++) {
////		cout << res[res_i] << endl;;
////	}
////
////	return 0;
////
////}
//
//
//
//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//#include <string>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//
///*请完成下面这个函数，实现题目要求的功能
//当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
//******************************开始写代码******************************/
//bool  cmp(const string &a, const string &b) {
//
//	vector<string> str = { "3","4","5","6","7","8","9", "10","J","P", "K", "A","2" };
//
//	vector<string>::iterator  it1 = find(str.begin(), str.end(), a);
//	auto idx1 = distance(str.begin(), it1);
//
//	vector<string>::iterator  it2 = find(str.begin(), str.end(), b);
//	auto idx2 = distance(str.begin(), it2);
//
//	if (idx1 < idx2) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//
//vector < string > pokersort(vector < string > pokers) {
//	
//	sort(pokers.begin(), pokers.end(), cmp);
//	return  pokers;
//}
//
///******************************结束写代码******************************/
//int main() {
//	vector < string > res;
//
//	int _pokers_size = 0;
//	cin >> _pokers_size;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	vector<string> _pokers;
//	string _pokers_item;
//	for (int _pokers_i = 0; _pokers_i < _pokers_size; _pokers_i++) {
//		getline(cin, _pokers_item);
//		_pokers.push_back(_pokers_item);
//	}
//	res = pokersort(_pokers);
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		cout << res[res_i] << endl;;
//	}
//	return 0;
//}