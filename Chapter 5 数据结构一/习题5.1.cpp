//Chapter 5 ���ݽṹһ 
//ϰ��5.1 ��ջ��ʹ��

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
