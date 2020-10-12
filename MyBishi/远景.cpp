//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//
//using namespace std;


//int main() {
//	string str;
//	getline(cin, str);
//
//	stack<char> s1;
//
//	for (auto i : str) {
//		if (i == '\" ' || i == '{' || i == '}' || i == '[' || i == ']') {
//			s1.push(i);
//		}
//	}
//
//	stack <char> s2;
//	bool  flag = true;
//	while (!s1.empty()) {
//		if (s2.empty()) {
//			s2.push(s1.top());
//			s1.pop();
//			continue;
//		}
//
//		char t = s1.top();
//		s1.pop();
//		if (t == '}' || t == ']') {
//			s2.push(t);
//			continue;
//		}
//
//		if (t == '{') {
//			if (s2.top() == '}') {
//				s2.pop();
//				continue;
//			}
//			else {
//				flag = false;
//				break;
//			}
//		}
//
//		if (t == '[') {
//			if (s2.top() == ']') {
//				s2.pop();
//				continue;
//			}
//			else {
//				flag = false;
//				break;
//			}
//		}
//
//		if (t == '\"') {
//			if (s2.top() == '\"') {
//				s2.pop();
//				continue;
//			}
//			else {
//				s2.push(t);
//				break;
//			}
//		}
//	}
//
//	if (!s2.empty()) {
//		flag = false;
//	}
//
//	if (flag) {
//		cout << "true" << endl;
//	}
//	else {
//		cout << "false" << endl;
//	}
//
//	return 0;
//}
//
//
//int main() {
//	string str;
//	getline(cin, str);
//	int count = 0;
//	stack<char> s;
//
//	unordered_map<char, char> pairs = { {'"','"'}, {']', '['},{'}', '{'} };
//
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] != '\"' && str[i] != '{' && str[i] != '}' && str[i] != '[' && str[i] != ']') {
//			continue;
//		}
//		else {
//			if (pairs.count(str[i])) {
//				if (s.empty() || s.top() != pairs[str[i]]) {
//					cout << "false" << endl;
//					return 0;
//				}
//				s.pop();
//			}
//			else {
//				s.push(str[i]);
//			}
//		}
//	}
//
//	if (s.empty()) {
//		cout << "true" << endl;
//	}
//	else {
//		cout << "false" << endl;
//	}
//
//	return  0;
//}



//I want to go to the zoo[the small one