//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	int count = 0;
//	int i = 0;
//	int j = str.size() - 1;
//
//	while (i <= j) {
//		if (count == 0 && str[i] != str[j]) {
//			count++;
//			if (str[i + 1] == str[j]) {
//				str.erase(i, 1);
//				i++;
//			}
//			else if (str[i] == str[j - 1]) {
//				str.erase(j, 1);
//				j--;
//			}
//			else {
//				cout << "false" << endl;
//				return 0;
//			}
//		}
//		else if (count != 0 && str[i] != str[j]) {
//			cout << "false" << endl;
//			return 0;
//		}
//		else if (str[i] == str[j]) {
//			i++;
//			j--;
//		}
//	}
//	cout << str << endl;
//	return 0;
//}
//
//
//class Solution {
//public:
//	/**
//	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//	 * 编译顺序
//	 * @param input string字符串
//	 * @return string字符串
//	 */
//	string compileSeq(string input) {
//		// write code here
//		input.substr(1, input.size() - 2);
//		vector<int> nums;
//
//		input += ',';
//		string test = "";
//		for (int i = 0; i < input.size(); i++) {
//			if (input[i] == ',')
//			{
//				nums.push_back(stoi(test));
//				test = "";
//			}
//			else
//			{
//				test += input[i];
//			}
//		}
//
//	
//		
//
//	}
//};





/* 字符串压缩*/

//#include <string>
//#include <iostream>
//
//using namespace std;
//
//string compressString(string S) {
//	if (S.length() == 0) return S;
//	int len = S.length();
//	string ans = "";
//	int i = 0;
//	while (i < len) {
//		int count = 1;
//		while (S[i + 1] == S[i]) {
//			i++;
//			count++;
//		}
//		ans += to_string(count) + S[i];
//		i++;
//	}
//	return ans;
//}
//int main() {
//	string s;
//	cin >> s;
//	cout << compressString(s) << endl;
//	return 0;
//}

/* 蜗牛爬杆*/
//vector<int> foo(int n) {
//	vector<int> f(n + 1);
//	f[1] = 3;
//	f[2] = 3;
//	for (int i = 3; i <= n; i++) {
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	return f;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	int ans = 0;
//	vector<int> v = foo(n);
//	for (int i = n; i >= 1; i--) {
//		ans = (ans + v[i]) * 2;
//	}
//	cout << ans << endl;
//}


