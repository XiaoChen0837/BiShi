//mutex  Mymutex;
//
//
//
////�̰߳�ȫ ����ģʽ
//class Singelton1 {
//private:
//	Singelton1() {}
//	static Singelton1* instance;
//
//public:
//	static Singelton1* getInstance() {
//		return instance;
//	}
//};
//Singelton1* Singelton1::instance = new Singelton1;
//
//
////����ģʽ �̲߳���ȫ
//class Singelton2{
//private:
//	Singelton2() {}
//	static Singelton2* instance;
//
//public:
//	static Singelton2* getInstance() {
//		//˫�ؼ�� ��  (���߾�̬����)
//		if (instance == NULL) {
//			lock_guard<mutex> myLockGuard(Mymutex);
//			if (instance == NULL) {
//
//				static CGarhuishou huishou; //������ľ�̬����delete
//
//				instance = new Singelton2;
//			}
//		}
//		return instance;
//	}
//
//	class CGarhuishou {//���ռƻ��������ͷŶ��� 
//	public:
//		~CGarhuishou()   //��������ͷ�new
//		{
//			if (Singelton2::instance)
//			{
//				delete Singelton2::instance;
//				Singelton2::instance = NULL;
//			}
//		}
//	};
//
//};
//Singelton2* Singelton2::instance = NULL;
//
//
//
//class  Singleton {
//private:
//	Singleton() {}
//	static Singleton* instance;
//
//public:
//	static Singleton* getInstace(){
//		if (instance == NULL) {
//			Mymutex.lock();
//			if (instance == NULL) {
//				instance = new Singleton();
//			}
//			Mymutex.unlock();
//		}
//		return instance;
//	}
//};
//Singleton* Singleton::instance = NULL;
//
//
//int main() {
//	Singleton* s1 = Singleton::getInstace();
//	Singleton* s2 = Singleton::getInstace();
//	if (s1 == s2) {
//		cout << "���������ɹ�" << endl;
//	}
//	return 0;
//}