//#include <stdio.h>
//#include <iostream>
//
//#define ALIGN_ADDRESS(a,b)  ( (a + b - 1) & ( ~(b - 1) ) )
//
//union uniA {
//	int a;
//	char b[2];
//};
//
//void main() {
//	uniA A;
//	A.a = 10;
//	A.b[0] = 0;
//	A.b[1] = 1;
//
//	uniA B;
//	A.b[0] = 0;
//	A.b[1] = 1;
//	B.a = 10;
//
//	printf("%d,%d\n", A.a | B.a, (A.b[1] ^ B.b[1]) | (A.b[0] ^ B.b[0]));
//
//	int  a[4][3] = { {2,3,4},{4,3,2}, {3,2,4},{4,3,2} };
//	std::cout << a[3] - &a[1][2] << std::endl;
//
//	int m = 0x12345678;
//	int n = 0x4000;
//	std::cout << ALIGN_ADDRESS(m, n);
//}
//
