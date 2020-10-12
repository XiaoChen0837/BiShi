//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//
//using namespace std;
//

//int main() {
//	int m = 1;
//	for (int i = 0;  i < 4; i++)
//		for (int j = 0; j < i; j++)
//			m += 1;
//	cout << m;
//	return 0;
//}
//
///*最长上升子序列长度*/
///*
//输入: [10,9,2,5,3,7,101,18]
//输出: 4
//解释: 最长的上升子序列是 [2,3,7,101]，它的长度是 4。
//*/
//int lengthOfLIS(vector<int>& nums) {
//	int n = nums.size();
//	if (n <= 1) return n;
//
//	/*//上升栈
//	vector<int> s;
//	s.push_back(nums[0]);
//	for (int i = 1; i < n; i++) {
//		if (nums[i] > s.back())  s.push_back(nums[i]);
//		else {
//			//二分查找找到第一个大于等于nums[i]的值替换
//			int l = 0;
//			int r = s.size() - 1;
//			while (l <= r) {
//				int mid = l + (r - 1) / 2;
//				if (s[mid] < nums[i])  l = mid + 1;
//				else  r = mid - 1;
//			}
//			s[l] = nums[i];
//		}
//		
//	}
//	return s.size();*/
//
//	//O(n2)
//	vector<int> dp(n + 1, 0);
//	int LIS = 1;
//	dp[0] = 1;
//	for (int i = 1; i < n; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++) {
//			//利用dp[j] 更新dp[i];
//			if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
//				dp[i] = dp[j] + 1;
//			}
//		}
//		LIS = max(LIS, dp[i]);
//	}
//	return LIS;
//}
//
///*
//3. 无重复字符的最长子串
//示例 1:
//输入: "abcabcbb"
//输出: 3
//解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
//*/
//int lengthOfLongestSubstring(string s) {
//	//滑动窗口
//	unordered_map<char, int> m;
//	int res = 0;
//	string  word = "";
//	int begin = 0;
//	for (int i = 0; i < s.length(); i++) {
//		m[s[i]]++;
//		if (m[s[i]] == 1) {
//			word += s[i];
//			res = max(res, (int)word.length());
//		}
//		else {
//			while (begin < i && m[s[i]] > 1) {
//				m[s[begin]]--;
//				begin++;
//			}
//			word = s.substr(begin, i - begin + 1);
//		}
//	}
//	return res;
//}
///*
//128. 最长连续序列
//给定一个未排序的整数数组，找出最长连续序列的长度。
//要求算法的时间复杂度为 O(n)。
//示例:
//输入: [100, 4, 200, 1, 3, 2]
//输出: 4
//解释: 最长连续序列是 [1, 2, 3, 4]。它的长度为 4。
//*/
//int longestConsecutive(vector<int>& nums) {
//	/*
//	//超时解法
//	if(nums.size() <= 1) return nums.size();
//	sort(nums.begin(), nums.end());
//	int i = 0;
//	int res = 0;
//	while (i < nums.size() - 1) {
//		int count = 1;
//		while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
//			i++;
//			count++;
//			res = max(res, count);
//		}
//		i++;
//	}
//	return  res;*/
//	//O(N)
//	unordered_set<int> num_set;
//	for (const int& num : nums) {
//		num_set.insert(num);
//	}
//	int longestStreak = 0;
//	for (const int& num : num_set) {
//		if (!num_set.count(num - 1)) {
//			int currentNum = num;
//			int currentStreak = 1;
//			while (num_set.count(currentNum + 1)) {
//				currentNum += 1;
//				currentStreak += 1;
//			}
//			longestStreak = max(longestStreak, currentStreak);
//		}
//	}
//	return longestStreak;
//}
///*
//1143. 最长公共子序列
//若这两个字符串没有公共子序列，则返回 0。
//示例 1:
//输入：text1 = "abcde", text2 = "ace"
//输出：3
//解释：最长公共子序列是 "ace"，它的长度为 3。
//
//设最长结果是LCS
//其中，dp[i][j] 的含义是：对于 s1[1..i] 和 s2[1..j]，它们的 LCS 长度是 dp[i][j]。
//d[4][2] 的含义就是：对于 "abcd" 和 "ac"，它们的 LCS 长度是 2。我们最终想得到的答案应该是 dp[5][3]。
//
//*/
//int longestCommonSubsequence(string text1, string text2) {
//	int len1 = text1.length();
//	int len2 = text2.length();
//	vector<vector<int>> dp(len1 + 1,vector<int>(len2 + 1, 0));
//	for (int i = 1; i <= len1; i++) {
//		for (int j = 1; j <= len2; j++) {
//			if (text1[i - 1] == text2[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1; //加入LCS;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);//必须丢弃一个，找对LCS贡献大的，
//		}
//	}
//	return dp[len1][len2];
//
//}
//
//
//
//
//int  main() {
//	vector<int> nums = { 10,9,2,5,3,7,101,18 };
//	int res = lengthOfLIS(nums);
//	cout << res << endl;
//	string  s = "abcabcbb";
//	cout << lengthOfLongestSubstring(s) << endl;
//	return 0;
//}