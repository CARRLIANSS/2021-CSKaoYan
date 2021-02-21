//Chapter 5 数据结构一 
//习题5.1 堆栈的使用

#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		} 
		stack<int> s;
		for(int i = 0; i < n; i++){
			char op;
			cin >> op;
			if(op == 'P'){
				int number;
				cin >> number;
				s.push(number);
			} else if(op == 'O'){
				if(!s.empty()){
					s.pop();
				}
			} else{
				if(!s.empty()){
					cout << s.top() << endl;
				} else{
					cout << 'E' << endl;
				}
			}
		}
	}
	return 0;
}
