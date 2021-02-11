//Chapter 3 排序与查找 
//习题3.1 特殊排序
//用优先队列与栈（也可以直接sort） 

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		priority_queue<int> myPriorityQueue;
		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			myPriorityQueue.push(temp);
		}
		int max = myPriorityQueue.top();
		cout << max << endl;
		myPriorityQueue.pop();
		stack<int> myStack;
		if(myPriorityQueue.empty()){
			cout << -1 << endl;
		}
		while(!myPriorityQueue.empty()){
			int temp = myPriorityQueue.top();
			myStack.push(temp);
			myPriorityQueue.pop();	
		}
		while(!myStack.empty()){
			int i = myStack.top();
			cout << i << ' ';
			myStack.pop();
		}
	}
	
	return 0;
} 
