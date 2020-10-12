//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//using namespace std;
//
//class Base
//{
//public:
//	static int a;   //只被初始化一次
//	int b = 100;
//	/*static void Fun1()
//	{
//		a = a + b;
//		cout << "静态成员函数不能访问非静态成员函数和非静态数据成员；!" << "    " << a << endl;
//	}*/
//
//	void fun1() {
//		cout << a + b << endl;
//		cout << "非静态成员函数可以任意地访问静态成员函数和静态数据成员；" << endl;
//	}
//
//
//
//	static void Fun()  
//	{
//		a++;
//		cout << "静态成员函数可以被继承!" << "    "<<  a  <<  endl;
//	}
//	void fun() {
//		cout << "实例化之前不能访问非静态成员函数" << endl;
//	}
//};
//int Base::a = 1000;  //a只被初始化一次
//
//
//class Derived :public Base
//{
//public:
//	//static int a;
//	static void Fun() {
//		a = a * 2;
//		cout << "静态成员函数可以被重写!" << "    " << a << endl;
//	}
//};
////int Derived::a = 1001;   //错误 “a” : 重定义；多次初始化
//
//
//int main(void)
//{
//	//cout << "静态数据成员可以被继承!  " << Derived::a << endl;
//	Base::Fun();
//	cout << &Base::Fun << "    " << &Base::a << endl;
//	Base::Fun();
//	cout << &Base::Fun << "    " << &Base::a << endl;
//	Base::Fun();
//	cout << &Base::Fun << "    " << &Base::a << endl;
//	
//	Derived::Fun();
//	cout << &Derived::Fun << "    " << &Derived::a << endl;
//	Derived::Fun();
//	cout << &Derived::Fun << "    " << &Derived::a << endl;
//	Derived::Fun();
//	cout << &Derived::Fun << "    " << &Derived::a << endl;
//	//cout << Derived::a << endl;
//	//cout << &Derived::Fun << "    " << &Derived::a << endl;
//
//	
//	Base B;
//	B.fun();
//
//	cout <<"程序结束前a一直有效   " <<  Base :: a * 10000 << endl;
//
//	return 0;
//}