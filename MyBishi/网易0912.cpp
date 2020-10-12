//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <iostream>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<vector<string>> s;
//	cin.ignore();  //回车键当做一行读取
//	for (int i = 0; i < n; i++) {
//		vector<string> temp;
//		string str = "";
//		getline(cin, str);
//		str += ' ';
//		string test = "";
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] == ' ') {
//				temp.push_back(test);
//				test = "";
//			}
//			else {
//				test += str[i];
//			}
//		}
//
//		s.push_back(temp);
//	}
//
//	string str;
//	set<string> ss;
//	int it = (int)pow((s[0].size()), (s.size())) - 1; //  存在
//	while (it >= 0) {
//		str = "";
//		int temp = it;
//		for (int m = 0; m < s.size(); m++) {
//			if (temp / s[m].size() >= 0) {
//				str += s[m][temp % s[m].size()] + '-';
//				temp /= s[m].size();
//			}
//		}
//
//		ss.insert(str.substr(0, str.size() - 1));
//		it--;
//	}
//	for (auto i : ss) {
//		cout << i << endl;
//	}
//
//	return 0;
//}

//int midDistance(vector<string> word1, vector<string> word2) {
//	int n = word1.size();
//	int m = word2.size();
//	if (m * n == 0) {
//		return m + n;
//	}
//	vector<vector<int>> D(n + 1, vector<int>(m + 1, 0));
//	for(int i = 0; i < n + 1; i++){
//		D[i][0] = i;
//	}
//	for (int j = 0; j < m + 1; j++) {
//		D[0][j] = j;
//	}
//	for (int i = 1; i < n + 1; i++) {
//		for (int j = 1; j < m + 1; j++) {
//			int left = D[i - 1][j] + 1;
//			int down = D[i][j - 1] + 1;
//			int left_down = D[i - 1][j - 1];
//			if (word1[i - 1] != word2[j - 1])  left_down += 1;
//			D[i][j] = min(left, min(down, left_down));
//		}
//	}
//	return D[n][m];
//
//}


//int main() {
//	string stop_words;
//	map<string, int> stop_m;
//	getline(cin, stop_words);
//	stringstream str(stop_words);
//	while (str) {
//		string ww;
//		str >> ww;
//		if (ww == "") {
//			continue;
//		}
//		stop_m[ww]++;
//	}
//	vector<string> strA, strB;
//	string temp;
//	getline(cin, temp);
//	istringstream issA(temp);
//	string A;
//	while (issA >> A) {
//		if (stop_m[A]) {
//			continue;
//		}
//		strA.push_back(A);
//	}
//	getline(cin, temp);
//	istringstream issB(temp);
//	string B;
//	while (issB >> B) {
//		if (stop_m[B]) {
//			continue;
//		}
//		strB.push_back(B);
//	}
//
//	int ans = midDistance(strA, strB);
//	cout << ans << endl;
//	return 0;
//}



//int countSubstrings(string &s) {
//	int n = s.size(), ans = 0;
//	for (int i = 0; i < 2 * n - 1; i++) {
//		int l = i / 2, r = i / 2 + i % 2;
//		while (l >= 0 && r < n && s[l] == s[r]) {
//			--l;
//			++r;
//			++ans;
//		}
//	}
//	return  ans - n;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int res = countSubstrings(s);
//	cout << res << endl;
//	return 0;
//}