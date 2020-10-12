//#include <iostream>
//#include <queue>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using  namespace std;
//
///*�������ڵ����ֵ*/
///*
//����: nums = [1,3,-1,-3,5,3,6,7], �� k = 3
//���: [3,3,5,5,6,7]
//����:
//  �������ڵ�λ��                ���ֵ
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
//	/*//����
//	for (int i = 0; i <= nums.size() - k; i++) {
//		int Max = nums[i];
//		for (int j = 0; j < i + k; j++) {
//			Max = max(Max, nums[j]);
//		}
//		res.push_back(Max);
//	}
//	*/
//	deque<int> dq; //��¼�±�
//	for (int i = 0; i < nums.size(); i++) {
//		//������еĸ�������k,��������(����ӵ�);
//		if (!dq.empty() && dq.front() == i - k) {
//			dq.pop_front();
//		}
//
//		//������Ƚ�����Ԫ��С������ջ
//		while (!dq.empty() && nums[dq.back()] < nums[i]) {
//			dq.pop_back();
//		}
//
//		//��Ԫ�����
//		dq.push_back(i);
//
//		//���
//		if (i - k + 1 >= 0) {
//			res.push_back(nums[dq.front()]);
//		}
//	}
//	return  res;
//}
//
///*K ����ͬ������������*/
///*
//���룺A = [1,2,1,2,3], K = 2
//�����7 
//���ͣ�ǡ���� 2 ����ͬ������ɵ������飺
//[1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2].
//*/
////˫ָ��+����  �������ڵ�Ԫ����k��  �ۼ�һ�����������
//int distinctKarr(vector<int> nums, int k) {
//	int left = 0;    //�������Ƽ�
//	int right = 0;   //�������Ƽ�
//	int ans = 0;
//	int n = nums.size();
//
//	//�������ָ���
//	unordered_map<int, int> hash;
//	while (right < n) {
//		hash[nums[right++]]++;
//		
//		//���ڵ����ֳ���k,��С���ڣ�left����
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
//		//���ڵ����ֵ���k����ʼ��������Ƕ��ٸ����ۼ�
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
//		//hash�ָ���left
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