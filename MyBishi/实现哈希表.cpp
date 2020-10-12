//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef int KeyType;  //���ü�ֵΪ���Σ��޸�����ʱ��ֻҪ�޸�����Ķ��弴��
//const int NULLKEY = 0;
//
//int  c = 0;  //ͳ�Ƴ�ͻ����
//
//struct Elemtype {
//	KeyType key;
//	int ord;
//};
//
//int hashsize[] = { 11,19,29,37,47 };  //hash������������
//int Hash_length = 0;
//
//class HashTable {
//private:
//	Elemtype *elem;    //����Ԫ�����飬��̬����
//	int count;  //��ǰ����Ԫ�ظ���
//	int size;   //����hash�������Ϊ�ڼ�����hashsize[size];
//
//public:
//	/***�����յ�hash��*****/
//	int Init_HashTable() {
//		int i = 0; 
//		int count = 0;
//		size = 0;
//		Hash_length = hashsize[0];
//		elem = new Elemtype[Hash_length];
//
//		if (!elem) {
//			cout << "�ڴ�����ʧ��" << endl;
//			exit(0);
//		}
//
//		for (i = 0; i < Hash_length; i++) {
//			elem[i].key = NULLKEY;
//		}
//		return 1;
//	}
//
//	/**********���ٹ�ϣ��**********/
//	void Destroy_HashTable(){
//		delete[] elem;
//		elem = NULL;
//		count = 0;
//		size = 0;
//	}
//
//	/*********��ϣ��������ϣӳ�䣩*********/
//	//ȡģ��
//	unsigned Hash(KeyType k) {
//		return  k % Hash_length;
//	}
//	//�����ϣ��ͻ
//	void Collision(int &p, int d) {
//		//���ÿ��ŵ�ַ���������̽��
//		p = (p + d) % Hash_length; 
//	}
//
//	//����
//	bool Search_Hash(KeyType k, int &p) {
//		//�ڿ��ŵ�ַhash���в��ҹؼ��ֵ���k��Ԫ��
//		//���ҵ���p��ʾ��������,���Ҳ��ɹ�ʱ��pָ����ǿɲ����ַ
//		c = 0;
//		p = Hash(k);
//		while (elem[p].key != NULLKEY && elem[p].key != k) {
//			c++;
//			if (c < Hash_length) {
//				Collision(p, c);
//			}
//			else {
//				return false;
//			}
//		}
//		if (elem[p].key == k) {
//			return true;
//		}
//		else {
//			return  false;
//		}
//	}
//
//
//	//����
//	int Insert_Hash(Elemtype e) {
//		//���Ҳ��ɹ�����k���뵽Hash����
//		int p;
//		if (Search_Hash(e.key, p)) { 
//			return  -1; //��Ԫ���Ѿ����ڣ�
//		}
//		else if (c < hashsize[size] / 2) { //��ͻ����δ�ﵽ���ޣ�
//			//����e
//			elem[p] = e;
//			count++;
//			return 1;   //����ɹ�
//		}
//		else {
//			ReCreate_HashTable(); //�ؽ�hash��
//		}
//		return 0; //����ʧ��
//	}
//
//	//�ؽ���ϣ��
//	void ReCreate_HashTable() {
//		int i, count2 = count;
//		Elemtype *p, *elem2 = new Elemtype[count *2];
//		p = elem2;
//		cout << "____�ؽ�hash��_____" << endl;
//		for (i = 0; i < Hash_length; i++) //��ԭ��Ԫ���ݴ浽elem2��
//			if (elem[i].key != NULLKEY)
//				*p++ = *(elem + i);
//		count = 0; delete[]elem;
//		size++; //hash��������
//		Hash_length = hashsize[size];
//		p = new Elemtype[Hash_length];
//		if (!p)
//		{
//			cout << "�ռ�����ʧ��" << endl;
//			exit(0);
//		}
//		elem = p;
//		for (i = 0; i < Hash_length; i++)
//			elem[i].key = NULLKEY;
//		for (p = elem2; p < elem2 + count2; p++) //��ԭ��Ԫ�طŻ��±�
//			Insert_Hash(*p);
//
//	}
//	
//	void Traverse_HashTable()
//	{
//		cout << "��ϣ��ַ0->" << Hash_length - 1 << endl;
//		for (int i = 0; i < Hash_length; i++)
//			if (elem[i].key != NULLKEY)
//				cout << "Ԫ�صĹؼ���ֵ�����ı�־�ֱ��ǣ�" << elem[i].key << "  " << elem[i].ord << endl;
//
//	}
//
//	void Get_Data(int p){
//		cout << "Ԫ�صĹؼ���ֵ�����ı�־�ֱ��ǣ�" << elem[p].key << "  " << elem[p].ord << endl;
//	}
//
//
//};
//
//
//int main()
//{
//	Elemtype r[12] = { {17,1},{60,2},{29,3},{38,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12} };
//	HashTable H;
//	int i, p, j;
//	KeyType k;
//	H.Init_HashTable();
//	for (i = 0; i < 11; i++) //����ǰ11����¼
//	{
//		j = H.Insert_Hash(r[i]);
//		if (j == -1)
//			cout << "�������йؼ���Ϊ" << r[i].key << "  " << r[i].ord << "�ļ�¼" << endl;
//	}
//
//	cout << "����ϣ��ַ˳�������ϣ��" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "����Ҫ���ҵļ�¼�Ĺؼ��֣�";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "�޴˼�¼" << endl;
//
//	j = H.Insert_Hash(r[11]); //�������һ��Ԫ��
//	if (j == 0)
//	{
//		cout << "����ʧ��" << endl;
//		cout << "��Ҫ�ؽ���ϣ��ſ��Բ���" << endl;
//		cout << "____�ؽ���ϣ��____" << endl;
//		H.Insert_Hash(r[i]); //�ؽ������²���
//	}
//
//	cout << "�����ؽ���Ĺ�ϣ��" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "����Ҫ���ҵļ�¼�Ĺؼ��֣�";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "�ü�¼������" << endl;
//
//	cout << "____���ٹ�ϣ��____" << endl;
//	H.Destroy_HashTable();
//
//	return 0;
//}



////�򵥰汾��
////ʵ�ֲ������
////�����ǹ�ϣ��ͻ���Լ���̬����
//#include <iostream>
//
//using namespace std;
//
//typedef int KeyType;  //���ü�ֵΪ���Σ��޸�����ʱ��ֻҪ�޸�����Ķ��弴��
//const int NULLKEY = 0;
//
//struct Elemtype {
//	KeyType key;
//	int ord;
//};
//
//int Hash_length = 100;
//
//class HashTable {
//private:
//	Elemtype *elem;    //����Ԫ�����飬��̬����
//	int count;  //��ǰ����Ԫ�ظ���
//	int size;   //����hash�������Ϊ�ڼ�����hashsize[size];
//
//public:
//	/***�����յ�hash��*****/
//	int Init_HashTable() {
//		int i = 0; 
//		int count = 0;
//		elem = new Elemtype[Hash_length];
//
//		if (!elem) {
//			cout << "�ڴ�����ʧ��" << endl;
//			exit(0);
//		}
//
//		for (i = 0; i < Hash_length; i++) {//��ʼ��
//			elem[i].key = NULLKEY;
//		}
//		return 1;
//	}
//
//	/**********���ٹ�ϣ��**********/
//	void Destroy_HashTable(){
//		delete[] elem;
//		elem = NULL;
//		count = 0;
//	}
//
//	/*********��ϣ��������ϣӳ�䣩*********/
//	//ȡģ��
//	unsigned Hash(KeyType k) {
//		return  k % Hash_length;
//	}
//
//	//����
//	bool Search_Hash(KeyType k, int &p) {
//		//�ڿ��ŵ�ַhash���в��ҹؼ��ֵ���k��Ԫ��
//		//���ҵ���p��ʾ��������,���Ҳ��ɹ�ʱ��pָ����ǿɲ����ַ
//		//��p���и���
//		p = Hash(k);
//		
//		if (elem[p].key == k) {
//			return true;
//		}
//		else {
//			return  false;
//		}
//	}
//
//	//����
//	int Insert_Hash(Elemtype e) {
//		//���Ҳ��ɹ�����k���뵽Hash����
//		int p;
//		if (Search_Hash(e.key, p)) { 
//			return  -1; //��Ԫ���Ѿ����ڣ�
//		}
//		else { 
//			//����e
//			elem[p] = e;
//			count++;
//			return 1;   //����ɹ�
//		}
//		return 0; //����ʧ��
//	}
//
//
//	void Traverse_HashTable()
//	{
//		cout << "��ϣ��ַ0->" << Hash_length - 1 << endl;
//		for (int i = 0; i < Hash_length; i++)
//			if (elem[i].key != NULLKEY)
//				cout << "Ԫ�صĹؼ���ֵ�����ı�־�ֱ��ǣ�" << elem[i].key << "  " << elem[i].ord << endl;
//
//	}
//
//	void Get_Data(int p){
//		cout << "Ԫ�صĹؼ���ֵ�����ı�־�ֱ��ǣ�" << elem[p].key << "  " << elem[p].ord << endl;
//	}
//};
//
//int main()
//{
//	Elemtype r[12] = { {17,1},{60,2},{29,3},{38,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12} };
//	HashTable H;
//	int i, p, j;
//	KeyType k;
//	H.Init_HashTable();
//	for (i = 0; i < 11; i++) //����ǰ11����¼
//	{
//		j = H.Insert_Hash(r[i]);
//		if (j == -1)
//			cout << "�������йؼ���Ϊ" << r[i].key << "  " << r[i].ord << "�ļ�¼" << endl;
//	}
//
//	cout << "����ϣ��ַ˳�������ϣ��" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "����Ҫ���ҵļ�¼�Ĺؼ��֣�";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "�޴˼�¼" << endl;
//
//
//	j = H.Insert_Hash(r[11]); //����
//	H.Traverse_HashTable();
//	cout << endl;
//
//
//	cout << "����Ҫ���ҵļ�¼�Ĺؼ��֣�";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "�ü�¼������" << endl;
//
//
//	cout << "____���ٹ�ϣ��____" << endl;
//	H.Destroy_HashTable();
//
//	return 0;
//}
