//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef int KeyType;  //设置键值为整形，修改类型时，只要修改这里的定义即可
//const int NULLKEY = 0;
//
//int  c = 0;  //统计冲突次数
//
//struct Elemtype {
//	KeyType key;
//	int ord;
//};
//
//int hashsize[] = { 11,19,29,37,47 };  //hash表容量递增表
//int Hash_length = 0;
//
//class HashTable {
//private:
//	Elemtype *elem;    //数据元素数组，动态申请
//	int count;  //当前数据元素个数
//	int size;   //决定hash表的容量为第几个，hashsize[size];
//
//public:
//	/***构建空的hash表*****/
//	int Init_HashTable() {
//		int i = 0; 
//		int count = 0;
//		size = 0;
//		Hash_length = hashsize[0];
//		elem = new Elemtype[Hash_length];
//
//		if (!elem) {
//			cout << "内存申请失败" << endl;
//			exit(0);
//		}
//
//		for (i = 0; i < Hash_length; i++) {
//			elem[i].key = NULLKEY;
//		}
//		return 1;
//	}
//
//	/**********销毁哈希表**********/
//	void Destroy_HashTable(){
//		delete[] elem;
//		elem = NULL;
//		count = 0;
//		size = 0;
//	}
//
//	/*********哈希函数（哈希映射）*********/
//	//取模法
//	unsigned Hash(KeyType k) {
//		return  k % Hash_length;
//	}
//	//解决哈希冲突
//	void Collision(int &p, int d) {
//		//采用开放地址法里的线性探测
//		p = (p + d) % Hash_length; 
//	}
//
//	//查找
//	bool Search_Hash(KeyType k, int &p) {
//		//在开放地址hash表中查找关键字等于k的元素
//		//若找到用p表示待查数据,查找不成功时，p指向的是可插入地址
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
//	//插入
//	int Insert_Hash(Elemtype e) {
//		//查找不成功，将k插入到Hash表中
//		int p;
//		if (Search_Hash(e.key, p)) { 
//			return  -1; //该元素已经存在；
//		}
//		else if (c < hashsize[size] / 2) { //冲突次数未达到上限；
//			//插入e
//			elem[p] = e;
//			count++;
//			return 1;   //插入成功
//		}
//		else {
//			ReCreate_HashTable(); //重建hash表
//		}
//		return 0; //插入失败
//	}
//
//	//重建哈希表
//	void ReCreate_HashTable() {
//		int i, count2 = count;
//		Elemtype *p, *elem2 = new Elemtype[count *2];
//		p = elem2;
//		cout << "____重建hash表_____" << endl;
//		for (i = 0; i < Hash_length; i++) //将原有元素暂存到elem2中
//			if (elem[i].key != NULLKEY)
//				*p++ = *(elem + i);
//		count = 0; delete[]elem;
//		size++; //hash容量增大
//		Hash_length = hashsize[size];
//		p = new Elemtype[Hash_length];
//		if (!p)
//		{
//			cout << "空间申请失败" << endl;
//			exit(0);
//		}
//		elem = p;
//		for (i = 0; i < Hash_length; i++)
//			elem[i].key = NULLKEY;
//		for (p = elem2; p < elem2 + count2; p++) //将原有元素放回新表
//			Insert_Hash(*p);
//
//	}
//	
//	void Traverse_HashTable()
//	{
//		cout << "哈希地址0->" << Hash_length - 1 << endl;
//		for (int i = 0; i < Hash_length; i++)
//			if (elem[i].key != NULLKEY)
//				cout << "元素的关键字值和它的标志分别是：" << elem[i].key << "  " << elem[i].ord << endl;
//
//	}
//
//	void Get_Data(int p){
//		cout << "元素的关键字值和它的标志分别是：" << elem[p].key << "  " << elem[p].ord << endl;
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
//	for (i = 0; i < 11; i++) //插入前11个记录
//	{
//		j = H.Insert_Hash(r[i]);
//		if (j == -1)
//			cout << "表中已有关键字为" << r[i].key << "  " << r[i].ord << "的记录" << endl;
//	}
//
//	cout << "按哈希地址顺序遍历哈希表" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "输入要查找的记录的关键字：";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "无此记录" << endl;
//
//	j = H.Insert_Hash(r[11]); //插入最后一个元素
//	if (j == 0)
//	{
//		cout << "插入失败" << endl;
//		cout << "需要重建哈希表才可以插入" << endl;
//		cout << "____重建哈希表____" << endl;
//		H.Insert_Hash(r[i]); //重建后重新插入
//	}
//
//	cout << "遍历重建后的哈希表" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "输入要查找的记录的关键字：";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "该记录不存在" << endl;
//
//	cout << "____销毁哈希表____" << endl;
//	H.Destroy_HashTable();
//
//	return 0;
//}



////简单版本；
////实现插入查找
////不考虑哈希冲突，以及动态扩容
//#include <iostream>
//
//using namespace std;
//
//typedef int KeyType;  //设置键值为整形，修改类型时，只要修改这里的定义即可
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
//	Elemtype *elem;    //数据元素数组，动态申请
//	int count;  //当前数据元素个数
//	int size;   //决定hash表的容量为第几个，hashsize[size];
//
//public:
//	/***构建空的hash表*****/
//	int Init_HashTable() {
//		int i = 0; 
//		int count = 0;
//		elem = new Elemtype[Hash_length];
//
//		if (!elem) {
//			cout << "内存申请失败" << endl;
//			exit(0);
//		}
//
//		for (i = 0; i < Hash_length; i++) {//初始化
//			elem[i].key = NULLKEY;
//		}
//		return 1;
//	}
//
//	/**********销毁哈希表**********/
//	void Destroy_HashTable(){
//		delete[] elem;
//		elem = NULL;
//		count = 0;
//	}
//
//	/*********哈希函数（哈希映射）*********/
//	//取模法
//	unsigned Hash(KeyType k) {
//		return  k % Hash_length;
//	}
//
//	//查找
//	bool Search_Hash(KeyType k, int &p) {
//		//在开放地址hash表中查找关键字等于k的元素
//		//若找到用p表示待查数据,查找不成功时，p指向的是可插入地址
//		//对p进行更新
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
//	//插入
//	int Insert_Hash(Elemtype e) {
//		//查找不成功，将k插入到Hash表中
//		int p;
//		if (Search_Hash(e.key, p)) { 
//			return  -1; //该元素已经存在；
//		}
//		else { 
//			//插入e
//			elem[p] = e;
//			count++;
//			return 1;   //插入成功
//		}
//		return 0; //插入失败
//	}
//
//
//	void Traverse_HashTable()
//	{
//		cout << "哈希地址0->" << Hash_length - 1 << endl;
//		for (int i = 0; i < Hash_length; i++)
//			if (elem[i].key != NULLKEY)
//				cout << "元素的关键字值和它的标志分别是：" << elem[i].key << "  " << elem[i].ord << endl;
//
//	}
//
//	void Get_Data(int p){
//		cout << "元素的关键字值和它的标志分别是：" << elem[p].key << "  " << elem[p].ord << endl;
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
//	for (i = 0; i < 11; i++) //插入前11个记录
//	{
//		j = H.Insert_Hash(r[i]);
//		if (j == -1)
//			cout << "表中已有关键字为" << r[i].key << "  " << r[i].ord << "的记录" << endl;
//	}
//
//	cout << "按哈希地址顺序遍历哈希表" << endl;
//	H.Traverse_HashTable();
//	cout << endl;
//
//	cout << "输入要查找的记录的关键字：";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "无此记录" << endl;
//
//
//	j = H.Insert_Hash(r[11]); //插入
//	H.Traverse_HashTable();
//	cout << endl;
//
//
//	cout << "输入要查找的记录的关键字：";
//	cin >> k;
//	j = H.Search_Hash(k, p);
//	if (j == 1)
//		H.Get_Data(p);
//	else
//		cout << "该记录不存在" << endl;
//
//
//	cout << "____销毁哈希表____" << endl;
//	H.Destroy_HashTable();
//
//	return 0;
//}
