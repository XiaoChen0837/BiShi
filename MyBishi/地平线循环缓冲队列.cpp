///*������*/
//ListNode * InsertNode(ListNode *head, ListNode * s)  //headΪ����ͷָ�룬sָ�������
//{
//	ListNode *p;
//	p = head; 
//	if (head == NULL) {
//		head = s;         
//		s->next = NULL;
//	}
//	else {
//		ListNode *p;
//		p = head;
//		while (p -> next){
//			p = p -> next;
//		}
//		p->next = s;
//	}
//	return head;
//}
//
//
///*ɾ�����*/
//ListNode *DeleteNode(ListNode *head, int delData)   //ɾ������ΪdelDate�Ľ��ĺ���
//{
//	ListNode *p, *q;
//	p = head;        
//	if (head == NULL){
//		return(head);
//	}
//	//���ҵ�Ҫɾ���Ľ��                       
//	while (delData != p->data && p->next != NULL) 
//	{
//		q = p;  
//		p = p->next;
//	}    
//	if (delData == p->data)     
//	{
//		if (p == head)  
//			head = p->next;   
//		else q->next = p->next;    
//	}
//	return head;
//}
//
//
//
///* ��ת����*/
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
//		if (p2) {
//			p2 = p2->next;
//		}
//	}
//	return  p0;
//}
//
//


//#include <iostream>
//using namespace std;


//struct st{
//	char b;
//	int a;
//	long c;
//	long long d;
//};
//
//int main() {
//	cout << sizeof(char) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long long) << endl;
//	cout << sizeof(st) << endl;
//	return 0;
//}
//template <class T>
//class queueBuffer{
//private:
//	unsigned int m_size;
//	int m_front;  //��һ�λ�������С
//	int m_rear;   //���ڻ�������С
//	T*  m_data;
//public:
//	queueBuffer(unsigned size)
//		:m_size(size),
//		m_front(0),
//		m_rear(0)
//	{ //��ʼ����������С
//		m_data = new T[size];
//	}
//
//	~queueBuffer(){
//		delete[] m_data;
//	}
//
//	bool isEmpty(){
//		return m_front == m_rear;
//	}
//
//	bool isFull(){
//		return m_front == (m_rear + 1) % m_size;
//	}
//
//	void push(T element)throw(bad_exception){
//		if (isFull()){
//			cout << "����������" << endl;
//			throw bad_exception();
//		}
//		m_data[m_rear] = element; 
//		m_rear = (m_rear + 1) % m_size;
//	}
//
//	T pop() throw(bad_exception){
//		if (isEmpty())	{
//			cout << "������Ϊ��" << endl;
//			throw bad_exception();
//		} 
//		T tmp = m_data[m_front];
//		m_front = (m_front + 1) % m_size;
//		return tmp;
//	}
//};

//
//int main(){  //��������һ����С��5��ѭ���������
//	queueBuffer<int> q(5);
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	for (int i = 0; i < 4; i++)
//		cout << q.pop() << endl;
//	q.push(5);
//	q.push(5);
//	q.push(5);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//
//	return 0;
//}

//
//int countWay(int n) {
//	if (n <= 1)  return 1;
//	vector<long long>  dp(n + 1, 0);
//	dp[0] = 1;
//	dp[1] = 1;
//
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//		dp[i] %= 1000000007;
//	}
//	return dp[n];
//}
//
//int main() {
//	int n;
//	cin >> n;
//	cout << countWay(n) << endl;
//	return 0;
//}

