//Chapter 5 数据结构一 
//例题5.4 Zero-complexity Transposition

#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n, m;
	while(cin >> n){
		stack<int> s;
		for(int i = 0; i < n; i++){
			cin >> m;
			s.push(m);
		}
		while(!s.empty()){
			cout << s.top() << ' ';
			s.pop();
		}
	}
	
	return 0;
}
