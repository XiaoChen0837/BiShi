//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>

//using namespace std;


//农行1
////int get_index(vector<string> point) {
//	vector<int> left;
//	vector<int> right;
//	for (int i = 0; i < point.size(); i++) {
//		int a = point[i].find(',');
//		string aa = point[i].substr(0, a);
//		left.push_back(atoi(aa.c_str()));
//		string bb = point[i].substr(a + 1);
//		right.push_back(atoi(bb.c_str()));
//	}
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < point.size(); i++) {
//		sum1 += left[i];
//		sum2 += right[i];
//	}
//	double sum1_avg = sum1 / point.size();
//	double sum2_avg = sum2 / point.size();
//
//	int idx = 0;
//	double A = pow(left[0] - sum1_avg, 2) + pow(right[0] - sum2_avg, 2);
//	for (int i = 1; i < point.size(); i++) {
//		double temp = pow(left[i] - sum1_avg, 2) + pow(right[i] - sum2_avg, 2);
//		if (temp < A) {
//			idx = i;
//			A = temp;
//		}
//	}
//	return idx;
//}
//
//int main() {
//	vector<string> s = { "1,1","2,2","1,2","1,3" };
//	cout << get_index(s) << endl;;
//}

//农行3
//static bool cmp(const std::string a, const std::string b) {
//	std::string s = "kshpq";
//	if (s.find(a[0]) != s.find(b[0])) {
//		return s.find(a[0]) < s.find(b[0]);
//	}
//	else {
//		return a[1] < b[1];
//	}
//}
//
//std::vector<std::string> getPokerOrder(std::vector<std::string>& cards) {
//	sort(cards.begin(), cards.end(), cmp);
//	return cards;
//}
//
//int main() {
//	vector<string> s = { "s1", "s3", "s9","s4","h1", "p3","p2" ,"q5","q4","q9", "k1","k2" };
//	vector<string> res = getPokerOrder(s);
//	for (auto ss : res) {
//		cout << ss << endl;
//	}
//}