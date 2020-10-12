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
//	//�鲢����
//	ListNode* mergeSort(ListNode* head) {
//		if (NULL == head || NULL == head->next) {
//			return head;
//		}
//		ListNode* slow = head;
//		ListNode* fast = head->next->next;
//		ListNode* l;
//		ListNode* r;
//		//����ָ����л���
//		while (NULL != fast && NULL != fast->next) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//
//		//�ݹ���ú���������O(logn)�Ŀռ临�Ӷ�
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
//		//����ʣ�ࣻ
//		p->next = l == NULL ? r : l;
//		return tempHead->next;
//	}
//};

//class Solution {
//public:
//	ListNode* sortList(ListNode* head) {//�ǵݹ�ռ临�Ӷ�O(1)
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
//			 �ҵ��ϲ������h1��h2ͷ�ڵ�
//			while (h != NULL) {
//				int i = itrv;
//				ListNode* h1 = h;
//				for (; h != NULL && i > 0; i--) {
//					h = h->next;
//				}
//				 i>0˵��û������2ֱ�ӷ���
//				if (i > 0)  break;
//				ListNode* h2 = h;
//
//				i = itrv;
//				for (; h != NULL && i > 0; i--) {
//					h = h->next;
//				}
//
//				 �����������ĳ���
//				int c1 = itrv;
//				int c2 = itrv - i;
//
//				 �ϲ�
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
//				����ʣ��
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
//	 ��ͷ���������������
//	ListNode* quickSort(ListNode* head, ListNode* end){
//		if (head == end || head->next == end || head->next->next == end) {
//			�սڵ���ߵ����ڵ�����
//			return head;
//		}
//
//		 ��С�ڻ��ֵ��ֵ�洢����ʱ������
//		ListNode* tmpHead = new ListNode(-1);
//
//		 partitionΪ���ֵ㣬pΪ����ָ�룬tpΪ��ʱ����ָ��
//		ListNode* partition = head->next;
//		ListNode* p = partition;
//		ListNode* tp = tmpHead;
//
//		 ��С�ڻ��ֵ�Ľ��ŵ���ʱ������
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
//		 �ϲ���ʱ�����ԭ������ԭ����ӵ���ʱ������漴��
//		tp->next = head->next;
//
//		 ����ʱ������ԭ����ע���ǲ�أ���������һ���ڶ��Ұ벿�ִ���ʱ�Ͷ����ˣ�
//		head->next = tmpHead->next;
//
//		quickSort(head, partition);
//		quickSort(partition, end);
//		 ��ĿҪ�󲻴�ͷ�ڵ㣬���ؽ��ʱȥ��
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
