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
//	static int a;   //ֻ����ʼ��һ��
//	int b = 100;
//	/*static void Fun1()
//	{
//		a = a + b;
//		cout << "��̬��Ա�������ܷ��ʷǾ�̬��Ա�����ͷǾ�̬���ݳ�Ա��!" << "    " << a << endl;
//	}*/
//
//	void fun1() {
//		cout << a + b << endl;
//		cout << "�Ǿ�̬��Ա������������ط��ʾ�̬��Ա�����;�̬���ݳ�Ա��" << endl;
//	}
//
//
//
//	static void Fun()  
//	{
//		a++;
//		cout << "��̬��Ա�������Ա��̳�!" << "    "<<  a  <<  endl;
//	}
//	void fun() {
//		cout << "ʵ����֮ǰ���ܷ��ʷǾ�̬��Ա����" << endl;
//	}
//};
//int Base::a = 1000;  //aֻ����ʼ��һ��
//
//
//class Derived :public Base
//{
//public:
//	//static int a;
//	static void Fun() {
//		a = a * 2;
//		cout << "��̬��Ա�������Ա���д!" << "    " << a << endl;
//	}
//};
////int Derived::a = 1001;   //���� ��a�� : �ض��壻��γ�ʼ��
//
//
//int main(void)
//{
//	//cout << "��̬���ݳ�Ա���Ա��̳�!  " << Derived::a << endl;
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
//	cout <<"�������ǰaһֱ��Ч   " <<  Base :: a * 10000 << endl;
//
//	return 0;
//}