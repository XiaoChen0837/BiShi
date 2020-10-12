//mutex  Mymutex;
//
//
//
////线程安全 饿汉模式
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
////懒汉模式 线程不安全
//class Singelton2{
//private:
//	Singelton2() {}
//	static Singelton2* instance;
//
//public:
//	static Singelton2* getInstance() {
//		//双重检查 锁  (或者静态变量)
//		if (instance == NULL) {
//			lock_guard<mutex> myLockGuard(Mymutex);
//			if (instance == NULL) {
//
//				static CGarhuishou huishou; //回收类的静态对象，delete
//
//				instance = new Singelton2;
//			}
//		}
//		return instance;
//	}
//
//	class CGarhuishou {//回收计划，用来释放对象 
//	public:
//		~CGarhuishou()   //类的析构释放new
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
//		cout << "单例创建成功" << endl;
//	}
//	return 0;
//}