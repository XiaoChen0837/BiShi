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
///*����������г���*/
///*
//����: [10,9,2,5,3,7,101,18]
//���: 4
//����: ��������������� [2,3,7,101]�����ĳ����� 4��
//*/
//int lengthOfLIS(vector<int>& nums) {
//	int n = nums.size();
//	if (n <= 1) return n;
//
//	/*//����ջ
//	vector<int> s;
//	s.push_back(nums[0]);
//	for (int i = 1; i < n; i++) {
//		if (nums[i] > s.back())  s.push_back(nums[i]);
//		else {
//			//���ֲ����ҵ���һ�����ڵ���nums[i]��ֵ�滻
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
//			//����dp[j] ����dp[i];
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
//3. ���ظ��ַ�����Ӵ�
//ʾ�� 1:
//����: "abcabcbb"
//���: 3
//����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
//*/
//int lengthOfLongestSubstring(string s) {
//	//��������
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
//128. ���������
//����һ��δ������������飬�ҳ���������еĳ��ȡ�
//Ҫ���㷨��ʱ�临�Ӷ�Ϊ O(n)��
//ʾ��:
//����: [100, 4, 200, 1, 3, 2]
//���: 4
//����: ����������� [1, 2, 3, 4]�����ĳ���Ϊ 4��
//*/
//int longestConsecutive(vector<int>& nums) {
//	/*
//	//��ʱ�ⷨ
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
//1143. �����������
//���������ַ���û�й��������У��򷵻� 0��
//ʾ�� 1:
//���룺text1 = "abcde", text2 = "ace"
//�����3
//���ͣ�������������� "ace"�����ĳ���Ϊ 3��
//
//��������LCS
//���У�dp[i][j] �ĺ����ǣ����� s1[1..i] �� s2[1..j]�����ǵ� LCS ������ dp[i][j]��
//d[4][2] �ĺ�����ǣ����� "abcd" �� "ac"�����ǵ� LCS ������ 2������������õ��Ĵ�Ӧ���� dp[5][3]��
//
//*/
//int longestCommonSubsequence(string text1, string text2) {
//	int len1 = text1.length();
//	int len2 = text2.length();
//	vector<vector<int>> dp(len1 + 1,vector<int>(len2 + 1, 0));
//	for (int i = 1; i <= len1; i++) {
//		for (int j = 1; j <= len2; j++) {
//			if (text1[i - 1] == text2[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1; //����LCS;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);//���붪��һ�����Ҷ�LCS���״�ģ�
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