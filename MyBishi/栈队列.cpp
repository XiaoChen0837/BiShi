//#include <stack>
//#include <queue>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
////用队列实现栈
//class Mystack {
//public:
//	Mystack() {
//
//	}
//
//	void push(int x) {
//		int size = data.size();
//		data.push(x);
//		while (size--) {
//			int tmp = data.front();
//			data.pop();
//			data.push(tmp);
//		}
//	}
//
//	int pop() {
//		int x = data.front();
//		data.pop();
//		return x;
//	}
//
//	int top() {
//		return data.front();
//	}
//
//	bool empty() {
//		return data.empty();
//		
//	}
//
//private:
//	queue<int> data;
//
//};
//
////栈实现队列
//class MyQueue {
//public:
//	MyQueue() {
//
//	}
//	void push(int x) {
//		input.push(x);
//	}
//
//	int pop() {
//		adjust();
//		int x = output.top();
//		output.pop();
//		return x;
//	}
//
//	int peek() {
//		adjust();
//		return  output.top();
//	}
//
//
//	bool empty() {
//		return input.empty() && output.empty();
//	}
//private:
//	void adjust() {
//		if (!output.empty()) {
//			return;
//		}
//		while (!input.empty()) {
//			output.push(input.top());
//			input.pop();
//		}
//	}
//	stack<int> input;
//	stack<int> output;
//};
//
////最小栈
//class minStack {
//public:
//	minStack() {
//
//	}
//
//	void push(int x) {
//		if (minData.empty()) {
//			minData.push(x);
//			data.push(x);
//		}
//		else {
//			data.push(x);
//			if (minData.top() >= x) {
//				minData.push(x);
//			}
//			else {
//				minData.push(minData.top());
//			}
//		}
//	}
//
//	void pop() {
//		minData.pop();
//		data.pop();
//	}
//
//	int mindata() {
//		return minData.top();
//	}
//
//	int top() {
//		return data.top();
//	}
//
//private:
//	stack<int> minData;
//	stack<int> data;
//};
