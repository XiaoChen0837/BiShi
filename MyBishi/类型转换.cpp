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
//
///*const_cast<type>(c_ptr);*/
//int main() {
//	int a = 66;
//	char b = 'B';
//
//	const int *c = &a;
//	*c = 68;   //error
//	int *e = const_cast<int*>(c);
//	*e = 69;   //right
//
//	 ԭʼ����
//	int ary[4] = { 1,2,3,4 };
//	 ��ӡ����
//	for (int i = 0; i < 4; i++)
//		std::cout << ary[i] << "\t";
//	std::cout << std::endl;
//
//	 ����������ָ��
//	const int* c_ptr = ary;
//	c_ptr[1] = 233;   //�����޸�  error
//
//	 ͨ��const_cast<Ty> ȥ����
//	int *ptr = const_cast<int*>(c_ptr);
//	 �޸�����
//	for (int i = 0; i < 4; i++)
//		ptr[i] += 1;    //pass
//
//	 ��ӡ�޸ĺ������
//	for (int i = 0; i < 4; i++)
//		std::cout << ary[i] << "\t";
//	std::cout << std::endl;
//
//	return 0;
//}
//
//
//
//class Base {
//public:
//	Base() {}
//	~Base() {}
//	void print() {
//		std::cout << "I'm Base" << endl;
//	}
//	virtual void i_am_virtual_foo() {}
//};
//
//class Sub : public Base {
//public:
//	Sub() {}
//	~Sub() {}
//	void print() {
//		std::cout << "I'm Sub" << endl;
//	}
//	virtual void i_am_virtual_foo() {}
//};
//int main() {
//	cout << "Sub->Base" << endl;
//	Sub * sub = new Sub();
//	sub->print();
//	Base* sub2base = dynamic_cast<Base*>(sub);
//	if (sub2base != nullptr) {
//		sub2base->print();
//	}
//	cout << "<sub->base> sub2base val is: " << sub2base << endl;
//
//
//	cout << endl << "Base->Sub" << endl;
//	Base *base = new Base();
//	base->print();
//	Sub  *base2sub = dynamic_cast<Sub*>(base);
//	if (base2sub != nullptr) {
//		base2sub->print();
//	}
//	cout << "<base->sub> base2sub val is: " << base2sub << endl;
//
//	delete sub;
//	delete base;
//	return 0;
//}