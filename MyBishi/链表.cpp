//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
///*
//链表反转
//链表交点
//2个一组反转链表
//k个一组反转链表
//*/
//
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x):val(x),next(NULL){}
//};
//
//链表反转
//ListNode* reverseList(ListNode* head) {
//	if (head == NULL)  return head;
//
//	ListNode* p0 = NULL;
//	ListNode* p1 = head;
//	ListNode* p2 = head->next;
//
//	while (p1) {
//		p1->next = p0;
//		p0 = p1;
//		p1 = p2;
//		if (p2)  p2 = p2->next;
//  	}
//	return  p0;
//}
//
//2个一组反转链表
//ListNode* reverseTwoList(ListNode* head) {
//	if (head == NULL || head->next == NULL)   return head;
//
//	ListNode* temp = head->next->next;
//
//	ListNode* new_head = head->next;
//	new_head->next = head;
//	head->next = reverseTwoList(temp);
//	return new_head;
//}
//
//k个一组反转链表
//ListNode* reverse(ListNode* head, int k) {
//	if (k == 1)  return head;
//	ListNode *new_head = NULL;
//	while (k--) {
//		ListNode *next = head->next;
//		head->next = new_head;
//		new_head = head;
//		head = next;
//	}
//	return new_head;
//}
//
//ListNode* reverseKGroup(ListNode* head, int k) {
//	int count = 0;
//	ListNode *p = head;
//	while (p && count < k) {
//		count++;
//		p = p->next;
//	}
//	if (count < k)  return head;
//	ListNode *new_head = reverse(head, k);
//
//	head->next = reverseKGroup(p, k);
//	return new_head;
//}
//
//
//
//链表求交点
//1  栈
///*
//int t = 0;
//while(s1.top() == s2.top()){
//	t = s1.top();
//	s1.pop();
//	s2.pop();
//}
//return t;
//*/
//
// 循环链表
//ListNode* getEqualOne(ListNode* headA, ListNode* headB) {
//	ListNode * a = headA;
//	ListNode * b = headB;
//
//	while (a != b) {
//		a =  a != NULL ? a->next : a = headB;
//		b =  b != NULL ? b->next : b = headA;
//	}
//	return a;
//}
//
//
//int main() {
//	ListNode a(1);
//	ListNode b(2);
//	ListNode c(3);
//	ListNode d(6);
//	ListNode e(7);
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//
//	ListNode A(4);
//	ListNode B(5);
//
//	A.next = &B;
//	B.next = &d;
//
//	/*ListNode* ans = reverseList(&a);
//	while (ans) {
//		cout << ans->val << " ";
//		ans = ans->next;
//	}*/
//
//
//	/*ListNode* ans1 = reverseTwoList(&a);
//	while (ans1) {
//		cout << ans1->val << " ";
//		ans1 = ans1->next;
//	}*/
//
// 	/*ListNode* ans2 = getEqualOne(&a, &A);
//	while (ans2) {
//		cout << ans2->val << " ";
//		ans2 = ans2->next;
//	}*/
//
//	ListNode* ans3 = reverseKGroup(&a, 2);
//	while (ans3) {
//		cout << ans3->val << " ";
//		ans3 = ans3->next;
//	}
//	return 0;
//}
//
