//#include <iostream>
//#include <queue>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using  namespace std;
//
///*滑动窗口的最大值*/
///*
//输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
//输出: [3,3,5,5,6,7]
//解释:
//  滑动窗口的位置                最大值
//---------------               -----
//[1  3  -1] -3  5  3  6  7       3
// 1 [3  -1  -3] 5  3  6  7       3
// 1  3 [-1  -3  5] 3  6  7       5
// 1  3  -1 [-3  5  3] 6  7       5
// 1  3  -1  -3 [5  3  6] 7       6
// 1  3  -1  -3  5 [3  6  7]      7
//*/
// 
//vector<int> maxSlidingWindow(vector<int> nums, int k) {
//	if (nums.size() == 0)  return {};
//	vector<int>  res;
//
//	/*//暴力
//	for (int i = 0; i <= nums.size() - k; i++) {
//		int Max = nums[i];
//		for (int j = 0; j < i + k; j++) {
//			Max = max(Max, nums[j]);
//		}
//		res.push_back(Max);
//	}
//	*/
//	deque<int> dq; //记录下标
//	for (int i = 0; i < nums.size(); i++) {
//		//如果队列的个数等于k,弹出顶部(先入队的);
//		if (!dq.empty() && dq.front() == i - k) {
//			dq.pop_front();
//		}
//
//		//队列里比进来的元素小的数出栈
//		while (!dq.empty() && nums[dq.back()] < nums[i]) {
//			dq.pop_back();
//		}
//
//		//新元素入队
//		dq.push_back(i);
//
//		//输出
//		if (i - k + 1 >= 0) {
//			res.push_back(nums[dq.front()]);
//		}
//	}
//	return  res;
//}
//
///*K 个不同整数的子数组*/
///*
//输入：A = [1,2,1,2,3], K = 2
//输出：7 
//解释：恰好由 2 个不同整数组成的子数组：
//[1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2].
//*/
////双指针+滑窗  当滑窗内的元满足k个  累加一共多少种组合
//int distinctKarr(vector<int> nums, int k) {
//	int left = 0;    //负责右移减
//	int right = 0;   //负责右移加
//	int ans = 0;
//	int n = nums.size();
//
//	//计算数字个数
//	unordered_map<int, int> hash;
//	while (right < n) {
//		hash[nums[right++]]++;
//		
//		//窗口的数字超过k,缩小窗口，left右移
//		while (hash.size() > k) {
//			if (hash[nums[left]] > 1) {
//				hash[nums[left]]--;
//			}
//			else {
//				hash.erase(nums[left]);
//			}
//			left++;
//		}
//
//		//窗口的数字等于k；开始计算个数是多少个，累加
//		int temp = left;
//		while (hash.size() == k) {
//			ans++;
//			if (hash[nums[temp]] > 1) {
//				hash[nums[temp]]--;
//			}
//			else {
//				hash.erase(nums[temp]);
//			}
//			temp++;
//		}
//
//		//hash恢复到left
//		while (temp > left) {
//			hash[nums[temp - 1]]++;
//			temp--;
//		}
//		//right++;
//	}
//	return  ans;
//}
//
//
//
//
//int  main() {
//	vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
//	vector<int> nums1 = { 1,2,2,1,2,3 };
//	vector<int> res = maxSlidingWindow(nums, 3);
//	int res1 = distinctKarr(nums1, 2);
//	for (int i : res) {
//		cout << i << " ";
//	}
//	cout << endl;
//	cout << res1 << endl;
//
//	return  0;
//}