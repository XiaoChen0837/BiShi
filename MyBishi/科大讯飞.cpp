//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//

//科大讯飞求素数
//int main() {
//	int m; 
//	cin >> m;
//	string str = "";
//	while(m != 0) {
//		i nt t = sqrt(m);
//		for (int i = 2; i <= t; i++) {
//			if (m % i == 0) {
//				str += (to_string(i) + '*');
//				m /= i;
//				break;
//			}
//			else if (i == t) {
//				str += (to_string(m));
//				cout << str << endl;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}



//科大讯飞  去除下划线
//int main() {
//	string str;
//	getline(cin, str);
//	string res = "";
//	int i = 0;
//	while (str[i] == '_') {
//		i++;
//	}
//	int j = str.size() - 1;
//	while (str[j] == '_') {
//		j--;
//	}
//	res = str.substr(i, j - i + 1);
//	string ans = "";
//	bool isused_ = false;
//	for (int i = 0; i < res.size(); i++)
//	{
//	
//		if (res[i] == '_' && isused_==false)
//		{
//			isused_ = true;
//			ans += '_';
//		}
//		else if(res[i]!='_')
//		{
//			ans += res[i];
//			isused_ = false;
//		}
//	}
//
//
//	cout <<ans << endl;
//
//}

//科大讯飞  动态规划就最大
//int main() {
//	string s;
//	getline(cin, s);
//	int a = s.find(',');
//	int m = stoi(s.substr(0, a));
//	int n = stoi(s.substr(a + 1));
//
//	vector<vector<int>> nums;
//	for (int i = 0; i < m; i++) {
//		vector<int> temp;
//		for (int j = 0; j < n; j++) {
//			int num;
//			cin >> num;
//			temp.push_back(num);
//		}
//		nums.push_back(temp);
//	}
//
//	vector<vector<int>> dp(m, vector<int>(n));
//
//
//	dp[0][0] = nums[0][0];
//	for (int i = 1; i < n; i++) {
//		dp[0][i] = dp[0][i - 1] + nums[0][i];
//	}
//
//	for (int i = 1; i < m; i++) {
//		dp[i][0] = dp[i - 1][0] + nums[i][0];
//	}
//
//	for (int i = 1; i < m; i++) {
//		for (int j = 1; j < n; j++) {
//			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + nums[i][j];
//		}
//	}
//	cout << dp[m - 1][n - 1] << endl;
//	return 0;
//}



//科大讯飞  快速排序

//void swap(vector<int> & arr, int i, int j) {
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//void quick(vector<int>& arr, int left, int right) {
//	if (left >= right)  return;
//	int i = left, j = right;
//	int base = arr[left];
//	while (i < j) {
//		while (arr[j] >= base && i < j) j--;
//		while (arr[i] <= base && i < j) i++;
//		if (i < j)  swap(arr, i, j);
//	}
//	swap(arr, i, left);
//	quick(arr, left, i - 1);
//	quick(arr, i + 1, right);
//}
//
//
//
//int main() {
//	int  n;
//	cin >> n;
//	vector<int> nums;
//	string str = "";
//	cin >> str;
//	str += ',';
//	string test = "";
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == ',')
//		{
//			nums.push_back(stoi(test));
//			test = "";
//		}
//		else
//		{
//			test += str[i];
//		}
//	}
//
//	quick(nums, 0, n - 1);
//	string ans = "";
//	for (auto i : nums) {
//		ans+=(to_string(i)+',');
//	}
//
//
//	cout <<ans.substr(0, ans.size()-1) <<endl;
//
//}
