//Chapter 6 ��ѧ���� 
//����6.1 �������� 
//http://t.cn/AiCuKTOv

#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		stack<int> s;
		while(n != 0){
			int m = n % 2;
			s.push(m);
			n /= 2;
		}
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
	}
	
	return 0;
}
