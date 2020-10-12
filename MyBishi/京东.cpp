//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>

//using namespace std;

//int  main() {
//	/*string str;
//	getline(cin, str);
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == ' ')  continue;
//		else if (!isalnum(str[i]) )  str.erase(i, 1);
//	}
//	str += ' ';
//	vector<int> v;
//	string test = "";
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == ' ')
//		{
//			bool  flag = true;
//			for (int i = 0; i < test.length(); i++) {
//				if (!isdigit(test[i])) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag) {
//				int t = stoi(test);
//				if (t >= 1000 && t <= 3999) {
//					v.push_back(t);
//				}
//			}
//			test = "";
//		}
//
//		else
//		{
//			test += str[i];
//		}
//	}
//	for (auto i : v) {
//		cout << i << " ";
//	 }
//	cout << endl;*/
//	string str;
//	getline(cin, str);
//	int start = 0;
//	vector<int>vec;
//	while (start + 4 <= str.size())
//	{
//		string s = str.substr(start, 4);
//		if (isdigit(s[0])&& isdigit(s[1]) && isdigit(s[2]) && isdigit(s[3])) {
//			int a = stoi(s);
//			if ((start==0||(start - 1 >= 0 && (!isdigit(str[start - 1])))) && ((start+4<str.size()&&(!isdigit(str[start + 4])))||start+4==str.size()))
//			{
//				if (a >= 1000 && a <= 3999)
//				{
//					vec.push_back(a);
//					start += 4;
//				}
//				else
//					start++;
//			}
//			else
//			{
//				start++;
//			}
//		}
//		else
//		{
//			start++;
//		}
//	}
//	for (int i : vec)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}


//int  main() {
//	int n, m;
//	cin >> n >> m;
//	m = m * 100;
//	float x = n;
//	int res = 1;
//	while (x < m) {
//		x = x + x / 2;
//		res++;
//	}
//	cout << res << endl;
//	return 0;
//}


//float sum_drop(float an, int x) {
//	float res = 0;
//	float r = 1 / pow(2, x);
//	res = an * ((1 - r) * 2);
//	return  res;
//}
//
//int  main() {
//	int n, m;
//	cin >> n >> m;
//	m = m * 100;
//	int  res = 1;
//	float sum_up = n;
//	float sum_down = 0;
//
//	while (1) {
//		sum_up = n * res;
//		if (sum_up - sum_down >= m) {
//			break;
//		}
//		sum_down = sum_down + sum_drop(n / 2, res);
//		res++;
//	}
//	cout << res << endl;
//	return 0;
//}