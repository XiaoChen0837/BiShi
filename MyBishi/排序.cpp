//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <map>
//
//using  namespace std;


//int  main() {
//	vector<int> v(14, 7);
//
//	int m = rand() % 13 ;
//	//int m = 1;
//	int t = v[m];
//	while (v[(m + t) % 14] != 0) {
//		
//		v[m % 14] = 0;
//		int tt = m % 14;
//		for (int i = 1; i <= t; i++) {
//			m = (tt + i) % 14;
//			v[m] = v[m] + 1;
//		}
//		m = m + 1;
//		t = v[m % 14];
//	}
//	
//	for (int i = 0; i < 14; i++) {
//		cout << v[i] << " ";
//	}
//}
//
////πÈ≤¢
//void merging(vector<int>&arr, int L, int R, int mid);
//void mergeSort(vector<int>&arr, int L, int R) {
//	if (L >= R) {
//		return;
//	}
//	if (L < R) {
//		int mid = L + (R - L) / 2;
//		mergeSort(arr, L, mid);
//		mergeSort(arr, mid + 1, R);
//		merging(arr, L, R, mid);
//	}
//}
//
//void merging(vector<int>&arr, int L, int R, int mid) {
//	int *temp = new int[R - L + 1];
//	int k = 0, i = L, j = mid + 1;
//	while (i <= mid && j <= R) {
//		if (arr[i] < arr[j]) temp[k++] = arr[i++];
//		else  temp[k++] = arr[j++];
//	}
//	while (i <= mid)  temp[k++] = arr[i++];
//	while (j <= R)    temp[k++] = arr[j++];
//
//	for (int i = L, k = 0; i <= R; i++, k++) {
//		arr[i] = temp[k];
//	}
//	delete temp;
//}
//
////øÏ≈≈
////void Swap(vector<int> &arr, int i, int j);
//void quickSort(vector<int> &arr, int L, int R) {
//	if (L >= R) return;
//	int i = L;
//	int j = R;
//	int base = arr[L];
//	while (i < j) {
//		while (arr[j] >= base && i < j) j--;
//		while (arr[i] <= base && i < j) i++;
//		if (i < j) {
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i], arr[L]);
//	quickSort(arr, L, i - 1);
//	quickSort(arr, i + 1, R);
//}
//
////void Swap(vector<int> &arr, int i, int j) {
////	int temp = arr[i];
////	arr[i] = arr[j];
////	arr[j] = temp;
////}
//
////√∞≈›
//void bubble_sort(vector<int> &arr, int len) {
//	int i, j;
//	for (i = 0; i < len - 1; i++)
//		for (j = 0; j < len - 1 - i; j++)
//			if (arr[j] > arr[j + 1])
//				swap(arr[j], arr[j + 1]);
//}
//
//
//int main() {
//	vector<int>  arr = { 7,8,9,6,5,4,1,2,3 };
//	mergeSort(arr, 0, arr.size() - 1);
//	//quickSort(arr, 0, arr.size() - 1);
//	for (auto i : arr) {
//		cout << i << " ";
//	}
//	return  0;
//}


//class Solution {
//public:
//	/**
//	 * ƒÊ ±’Î–˝◊™æÿ’Û
//	 * @param matrix int’˚–Õvector<vector<>>  ‰»Îæÿ’Û
//	 * @return int’˚–Õvector<vector<>>
//	 */
//	vector<vector<int> > RotateMatrix(vector<vector<int> >& matrix) {
//		// write code here
//		if (matrix.size() == 0 || matrix[0].size() == 0) {
//			return {};
//		}
//
//		vector<vector<int> > ans;
//
//		for (int i = matrix[0].size() - 1; i >= 0; i--) {
//			vector<int> temp;
//			for (int j = 0; j < matrix.size(); j++) {
//				temp.push_back(matrix[j][i]);
//			}
//			ans.push_back(temp);
//		}
//		return  ans;
//	}
//};
//
//class Solution {
//public:
//	/**
//	 * ’“≥ˆ◊÷∑˚¥Æ÷–◊Ó¥Ûπ´π≤◊”◊÷∑˚¥Æ
//	 * @param str1 string◊÷∑˚¥Æ  ‰»Î◊÷∑˚¥Æ1
//	 * @param str2 string◊÷∑˚¥Æ  ‰»Î◊÷∑˚¥Æ2
//	 * @return string◊÷∑˚¥Æ
//	 */
//	string GetCommon(string str1, string str2) {
//		// write code here
//		string  res = "";
//		string shorter = str1.length() > str2.length() ? str2 : str1;
//		string longer = str1.length() > str2.length() ? str1 : str2;
//
//		int maxlen = 0;
//		int maxpos = 0;
//
//		for (int i = 0; i < shorter.length(); i++) {
//			for (int j = 0; j < longer.length(); i++) {
//				if (shorter[i] == longer[j]) {
//					int k = 1;
//					for (; shorter[i + k] == longer[j + k] && i + k < shorter.length(); k++);
//					if (k > maxlen) {
//						maxpos = i;
//						maxlen = k;
//					}
//				}
//			}
//		}
//		if (maxpos == -1) {
//			return res;
//		}
//		else {
//			res = shorter.substr(maxpos, maxlen);
//			return  res;
//		}
//	}
//};

