//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;

//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode *next) : val(x), next(next) {}
//};

//class Solution {
//public:
//	ListNode* sortList(ListNode* head) {
//		return mergeSort(head);
//	}
//private:
//	//归并排序
//	ListNode* mergeSort(ListNode* head) {
//		if (NULL == head || NULL == head->next) {
//			return head;
//		}
//		ListNode* slow = head;
//		ListNode* fast = head->next->next;
//		ListNode* l;
//		ListNode* r;
//		//快慢指针进行划分
//		while (NULL != fast && NULL != fast->next) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//
//		//递归调用函数将带来O(logn)的空间复杂度
//		r = mergeSort(slow->next);
//		slow->next = NULL;
//		l = mergeSort(head);
//
//		return mergeList(l, r);
//	}
//
//	ListNode* mergeList(ListNode* l, ListNode* r) {
//		ListNode* tempHead = new ListNode(-1);
//
//		ListNode* p = tempHead;
//
//		while (NULL != l && r != NULL) {
//			if (l->val < r->val) {
//				p->next = l;
//				l = l->next;
//			}
//			else {
//				p->next = r;
//				r = r->next;
//			}
//			p = p->next;
//		}
//		//处理剩余；
//		p->next = l == NULL ? r : l;
//		return tempHead->next;
//	}
//};

//class Solution {
//public:
//	ListNode* sortList(ListNode* head) {//非递归空间复杂度O(1)
//		if (NULL == head || NULL == head->next) {
//			return head;
//		}
//		ListNode* dummy = new ListNode(-1);
//		dummy->next = head;
//
//		int len = getListLen(head);
//
//		int itrv = 1;
//		
//		while (itrv < len) {
//			ListNode* pre = dummy;
//			ListNode* h = dummy->next;
//			 找到合并链表的h1和h2头节点
//			while (h != NULL) {
//				int i = itrv;
//				ListNode* h1 = h;
//				for (; h != NULL && i > 0; i--) {
//					h = h->next;
//				}
//				 i>0说明没有链表2直接返回
//				if (i > 0)  break;
//				ListNode* h2 = h;
//
//				i = itrv;
//				for (; h != NULL && i > 0; i--) {
//					h = h->next;
//				}
//
//				 求出两个链表的长度
//				int c1 = itrv;
//				int c2 = itrv - i;
//
//				 合并
//				while (c1 > 0 && c2 > 0) {
//					if (h1->val < h2->val) {
//						pre->next = h1;
//						h1 = h1->next;
//						c1--;
//					}
//					else {
//						pre->next = h2;
//						h2 = h2->next;
//						c2--;
//					}
//					pre = pre->next ;
//				}
//				处理剩余
//				pre->next = c1 > 0 ? h1 : h2;
//
//				while (c1 > 0 || c2 > 0) {
//					pre = pre->next;
//					c1--;
//					c2--;
//				}
//				pre->next = h;
//			}
//			itrv *= 2;
//		}
//		return dummy->next;
//	}
//
//	int  getListLen(ListNode* head) {
//		ListNode* cur = head;
//		int len = 0;
//		while (cur != NULL) {
//			len++;
//			cur = cur->next;
//		}
//		return len;
//	}
//};

//class Solution {
//public:
//	ListNode* sortList(ListNode* head) {
//		if (NULL == head || NULL == head->next) {
//			return head;
//		}
//		ListNode* newHead = new ListNode(-1);
//		newHead->next = head;
//		return quickSort(newHead, NULL);
//	}
//
//	 带头结点的链表快速排序
//	ListNode* quickSort(ListNode* head, ListNode* end){
//		if (head == end || head->next == end || head->next->next == end) {
//			空节点或者单个节点的情况
//			return head;
//		}
//
//		 将小于划分点的值存储在临时链表中
//		ListNode* tmpHead = new ListNode(-1);
//
//		 partition为划分点，p为链表指针，tp为临时链表指针
//		ListNode* partition = head->next;
//		ListNode* p = partition;
//		ListNode* tp = tmpHead;
//
//		 将小于划分点的结点放到临时链表中
//		while (p->next != end) {
//			if (p->next->val < partition->val) {
//				tp->next = p->next;
//				tp = tp->next;
//				p->next = p->next->next;
//			}
//			else {
//				p = p->next;
//			}
//		}
//		 合并临时链表和原链表，将原链表接到临时链表后面即可
//		tp->next = head->next;
//
//		 将临时链表插回原链表，注意是插回！（不做这一步在对右半部分处理时就断链了）
//		head->next = tmpHead->next;
//
//		quickSort(head, partition);
//		quickSort(partition, end);
//		 题目要求不带头节点，返回结果时去除
//		return head->next;
//	}
//};

//class Solution {
//public:
//	ListNode* sortList(ListNode* head) {
//		return quickSortList(head);
//	}
//
//	ListNode* quickSortList(ListNode* head) {
//		if (!head || !head->next) return head;
//		auto left = new ListNode(-1), mid = new ListNode(-1), right = new ListNode(-1);
//		auto ltail = left, mtail = mid, rtail = right;
//		int val = head->val;
//		for (auto p = head; p; p = p->next) {
//			if (p->val < val) ltail = ltail->next = p;
//			else if (p->val == val) mtail = mtail->next = p;
//			else rtail = rtail->next = p;
//		}
//		ltail->next = rtail->next = mtail->next = NULL;
//		left->next = quickSortList(left->next);
//		right->next = quickSortList(right->next);
//		auto lh = left;
//		while (lh->next) lh = lh->next;
//		lh->next = mid->next;
//		while (lh->next) lh = lh->next;
//		lh->next = right->next;
//		return left->next;
//	}
//};






int  main() {
	Solution su;

	ListNode a(2);
	ListNode b(1);
	ListNode c(7);
	ListNode d(3);
	ListNode e(6);

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;

	ListNode* ans = su.sortList(&a);

	while (ans) {
		cout << ans->val << " ";
		ans = ans->next;
	}

	return 0;
}
