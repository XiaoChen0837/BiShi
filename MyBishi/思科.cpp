//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool isJumpOk(vector<int>& nums) {
//	int n = nums.size();
//	int lastidx = 0;
//	for (int i = 0; i < n; i++) {
//		if (i <= lastidx) {
//			lastidx = max(lastidx, i + nums[i]);
//			if (lastidx >= n - 1) {
//				return true;
//			}
//		}
//	}
//	return  false;
//}
//
//int main() {
//	vector<int> nums;
//	string str = "";
//	cin >> str;
//	str = str.substr(1, str.size() - 1);
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
//	if (isJumpOk(nums))   cout << "true" << endl;
//	else  cout << "false" << endl;
//	return 0;
//}