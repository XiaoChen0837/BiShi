#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

////�ҵ��ұ߱�����ĵ�һ��Ԫ��
//vector<int> findMax(vector<int>num)
//{
//	if (num.size() == 0)return num;
//	vector<int>res(num.size());
//	int i = 0;
//	stack<int>s;
//	while (i < num.size())
//	{
//		if (s.empty() || num[s.top()] >= num[i])
//		{
//			s.push(i++);
//		}
//		else
//		{
//			res[s.top()] = num[i];
//			s.pop();
//		}
//	}
//	while (!s.empty())
//	{
//		res[s.top()] = INT_MAX;
//
//		s.pop();
//	}
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << endl;
//
//	return res;
//}

//
//template<typename Type >  
//const Type& min(const Type& a, const Type& b)
//{
//	return a < b ? a : b;
//
//}
//
//void ans(void) {
//	static int s = 9;
//	cout << s++ << endl;
//}
//
//void ans1(void) {
//	int s = 9;
//	cout << s++ << endl;
//}
//	
//int main(){
//	//int a = 10,  b = 9;
//	//cout << min(a, b) << endl;
//
//	//string s = "hello word";
//	//char str[] = "hello word";
//	//cout << sizeof("hello word") << endl;
//	//cout << sizeof(string) << endl;
//	//cout << sizeof(s)  << endl;
//	//cout << sizeof(str) << endl;
//
//	/*
//	int i = 10;
//	int *p = &i;
//	cout << p << endl;
//	*p = NULL;
//	cout << i << endl; 
//	cout << p << endl;
//	*/
//
//	ans();
//	ans();
//	ans();
//
//
//	ans1();
//	ans1();
//	ans1();
//
//	return 0;
//}



//using namespace std;
//class Test
//{
//public:
//	//Test(){// û�й���δ��ʼ������Test��: û�к��ʵ�Ĭ�Ϲ��캯������test
//	//	cout << "Test" << endl;
//	//}; ��ΪTest������ʾ�Ĵ������Ĺ��캯������ô�����޷����������������޲ι��캯����
//	//Test(int, int, int) {//ֻ�к������Ĺ��캯��
//	//	cout << "Test" << endl;
//	//};
//	Test() : a(10){
//	}
//
//
//private:
//	const int a ;             //const��Ա����
//	//int x;
//	//int y;
//	//int z;
//};
//class Mytest
//{
//public:
//	Mytest() :test() {       //����Ҫ��ʼ��
//		cout << "Mytest" << endl;
//	};
//private:
//	Test test; //����  ���Ա����������һ����
//};
////int main()
////{
////	int p3 = 0;
////
////	const int *p1;
////	int const *p2;
////	int *const p3;
////
////
////	Mytest test;
////	return 0;
////}
//int main(int argc, char *argv[])
//{
//	int i = 10;
//	int j = 1;
//	int k = 5;
//
//	//(*p) ��ֵ  p�ǵ�ַ
//	const int *p1 = &k;    //ֵ���ɱ�
//	
//	int const *p2 = &i;    //ֵ���ɱ�
//
//	int *const p3 = &j;    // ��ַ���ɱ�
//	
//	p1 = &i;
//	p2 = &j;             //���û����,��Ϊconst�Ƕ� *p2 �������Ƶ�
//	*p3 = 20;            //���Ҳû����,ͬ��,const�Ƕ�p3���в�����
//
//	//*p1 = 25;
//	//*p2 = 30;            //������,ԭ������Ѿ���const������,�����ٴθ�
//	//p3 = &j;             //ͬ��,����
//	return 0;
//
//}

//#include <iostream>       // std::cout
//#include <thread>         // std::thread
//#include <mutex>          // std::mutex, std::lock
//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;



//std::mutex foo, bar;       // ȫ����
//
//void task_a(vector<int>& v) {
//	// foo.lock(); bar.lock(); // replaced by:
//	std::lock(foo, bar);
//	
//	cout << this_thread::get_id() << endl;
//
//	for (int i = 0; i < 4; i++) {
//		v[i] = v[i] * 2;
//		std::cout << " task a" << "  " << v[i] << std :: endl; 
//	}
//	
//	foo.unlock();
//	bar.unlock();
//}
//
//void task_b(vector<int>& v) {
//	// bar.lock(); foo.lock(); // replaced by:
//	std::lock(bar, foo);
//	cout << this_thread::get_id() << endl;
//	for (int i = 0; i < 4; i++) {
//		v[i] = v[i] / 2;
//		std::cout << " task b" << "  " << v[i] << std::endl;
//	}
//
//	bar.unlock();
//	foo.unlock();
//}
//

//int main()
//{
//	cout << this_thread::get_id() << endl;
//	vector<int> v = { 1, 2, 3, 4 };
//	std::thread th1(task_a, std::ref(v));
//	std::thread th2(task_b, std::ref(v));
//	th1.join();
//	th2.join();

//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <mutex>
//#include <map>
//#include <queue>
//
//using namespace std;



//int  a = 4;
//
//int  &f(int  x)
//{
//	a = a + x;
//	return  a;
//}
//
//struct ctx{
//	int b;
//	struct ctx *next;
//};
//
//int main(void)
//{
//	struct ctx a[3] = { 5, &a[1],7,&a[2],9,'\0' };
//	struct ctx *p = &a[0];
//
//	cout << (p->b)++ << endl;
//	cout << (p++ ->b) << endl;
//	cout << (*p).b++ << endl;
//	cout << (++p->b) << endl;

	//char a[] = "hello";
	//a[0] = 'X';
	//const char *p = "world"; // ע��p ָ�����ַ���
	////p[0] = 'X';   // ���������ܷ��ָô�������ʱ����
	//cout << *p  << endl;
	//cout << *(p++) << endl;
	//cout << *p << endl;


	//int   t = 5;
	//cout << f(t) << endl;    // a = 9
	//f(t) = 20;               // a = 20
	//cout << f(t) << endl;    // t = 5, a = 20  a = 25
	//t = f(t);                // a = 25 t = 5    t = f(5) = a = 30;
	//cout << f(t) << endl;    // t = 60
//}    


//void foo(int a) {
//	a = 2 * a;
//	cout << a * a << endl;
//}
//
//string foo1() {
//	return "hello!";
//}
//
//void bar(const string & s) {
//	cout << s << endl;
//}
//
//int main() {
//	cout << "   �����ǹ���ָ������õ�     " << endl;
//	int a;
//	const int &ra = a;
//	//ra = 1; //����
//	a = 2; //��ȷ
//
//	bar(foo1());
//	bar("hello world");
//}




//int  main() {

	/*char a[6] = { '\0' };
	char a[7] = "string";
	char str[10];
	str = "string";//���� str�����ǿ����޸ĵ���ֵ  */


	//  cout  << "-----������lamda�����Ĳ���-----"
	//	int n = [](int x, int y) { return x + y; }(5, 4);
	//	cout << n << endl;
	//
	//	auto f = []{ return 42; };
	//	cout << f() << endl;
	//
	//}



	//int lengthOfLongestSubstring(string s) {
	//	if (s.length() < 2)  return s.length();
	//	map<char, int> m;
	//	int count = 0;
	//	for (int i = 0; i < s.length(); i++) {
	//		if (m[s[i]] != 0) {
	//			continue;
	//		}
	//		else {
	//			m[s[i]]++;
	//			count++;
	//		}
	//	}
	//	return count;
	//}
	//
	//
	//int main() {
	//	string s = "pwwkew";
	//	cout << lengthOfLongestSubstring(s) << endl;
	//
	//	return 0;
	//}
	//
	//


	//
	//#include <iostream>
	//#include <string>
	//#include <vector>
	//#include <algorithm>
	//#include <mutex>
	//#include <map>
	//#include <queue>
	//
	//using namespace std;
	//

	//class A {
	//	int a;
	//};
	//
	//class B {
	//	int a;
	//	int fun1() {};
	//};
	//
	//
	//class C {
	//	int a;
	//	int fun1() {};
	//	virtual int fun2() {};
	//};
	//
	//int main() {
	//	cout << sizeof(A) << endl;
	//	cout << sizeof(B) << endl;
	//	cout << sizeof(C) << endl;
	//}


	//�ַ�������
	//char * strcpy1(char * strDest, const char * strSrc)
	//{
	//	if ((strDest == NULL) || (strSrc == NULL)  )
	//		return NULL;
	//	char * strDestCopy = strDest;
	//	while ((*strDest++ = *strSrc++) != '\0');
	//	*strDest = '\0';
	//	return strDestCopy;
	//}


	//static void msg()
	//{
	//	static char a = 'A';
	//	printf("Hello\n");
	//}
	//
	//int main() {
	//	msg();
	//	return 0;
	//}
	//
	//
	//struct  ListNode  {
	//	int data;
	//	ListNode * next;
	//};
	//
	//ũ������  ͳ��01�ĸ�����ȵ���Ӵ�
	//https://blog.csdn.net/liql2007/article/details/9388283
	//#include <string>
	//#include <vector>
	//#include <stack>
	//#include <iostream>
	//using namespace std;
	//
	//void longestSubsequence(vector<int>& nums, int &s, int &t) {
	//	int Len = nums.size();
	//	vector<int> v(Len * 2 + 1, -1);
	//	int maxLen = 0;
	//	int diff = 0;
	//	for (int i = 0; i < nums.size(); ++i) {
	//		diff += nums[i] == 1 ? 1 : -1;
	//		if (v[diff + Len] == -1)
	//			v[diff + Len] = i;
	//		else {
	//			int len = i - v[diff + Len];
	//			if (maxLen < len) {
	//				maxLen = len;
	//				s = v[diff + Len] + 1;
	//				t = i;
	//			}
	//		}
	//	}
	//}
	//
	//int main() {
	//	int N;
	//	//cin >> N;
	//	vector<int> nums(N);
	//	for (int i = 0; i < N; i++) {
	//		int temp;
	//		cin >> temp;
	//		nums[i] = temp;
	//	}
	//	int s = -1, t = -1;
	//	longestSubsequence(nums, s, t);
	//	if (s == -1)
	//		cout << 0 << endl;
	//	else
	//		cout  << t - s + 1 << endl;
	//	return 0;
	//}


/*map������������*/
//#include <string>
//#include <vector>
//#include <map>
//#include <iostream>
//using namespace std;
//int main() {
//	map<int, int> m;
//	m.insert({ 1, 10 });
//	m.insert(make_pair(2, 20));
//
//	m.insert({ 1, 100 });
//
//	auto it = m.cbegin();
//
//	while (it != m.cend()) {
//
//		cout << it->first << "   " << it->second;
//		cout << endl;
//		++it;
//	}
//	return 0;
//}




//class Solution {
//public:
//	/**
//	 *
//	 * @param input string�ַ���
//	 * @return int����
//	 */
//	int calculate(string input) {
//		// write code here
//		for (int i = 0; i < input.size(); i++) {
//			if (input[i] == ' ')  input.erase(i, 1);
//		}
//
//		int  n = input.size();
//		char *num = new char[n];
//
//		strcpy(num, input.c_str());
//
//		int num2[1000000] = { 0 };
//		int i = 0;
//
//		for (i = 0; i < n; i++)
//		{
//			if (num[i] >= '0'  &&  num[i] <= '9')
//			{
//				num2[i] = num[i] - 48;//charת����int
//			}
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			if (num[i] == '*')
//			{
//				num2[i - 1] = num2[i - 1] * num2[i + 1];
//				for (int j = i; j < (n - 2); j++)
//				{
//					num[j] = num[j + 2];//����-2
//					num2[j] = num2[j + 2];
//				}
//			}
//			if (num[i] == '/')
//			{
//				num2[i - 1] = num2[i - 1] / num2[i + 1];
//				for (int j = i; j < (n - 2); j++)
//				{
//					num[j] = num[j + 2];//����-2
//					num2[j] = num2[j + 2];
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (num[i] == '+')
//			{
//				num2[i - 1] = num2[i - 1] + num2[i + 1];
//				for (int j = i; j < (n - 2); j++)
//				{
//					num[j] = num[j + 2];//����-2
//					num2[j] = num2[j + 2];
//				}
//			}
//			if (num[i] == '-')
//			{
//				num2[i - 1] = num2[i - 1] - num2[i + 1];
//				for (int j = i; j < (n - 2); j++)
//				{
//					num[j] = num[j + 2];//����-2
//					num2[j] = num2[j + 2];
//				}
//			}
//		}
//		return num2[0];
//	}
//};

//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	string str;
//	getline(cin, str);
//	istringstream in(str);
//	vector<int> A;
//	while (in >> str)
//	{
//		A.push_back(stoi(str));
//	}
//
//
//
//	string str1;
//	getline(cin, str1);
//	istringstream in2(str1);
//	while (in2 >> str1)
//	{
//		A.push_back(stoi(str1));
//	}
//
//	sort(A.begin(), A.end(), greater<int>() );
//
//	for (int i = 0; i < A.size() - 1; i++) {
//		cout << A[i] << " ";
//	}
//	cout << A[A.size() - 1];
//	return  0;
//}