//Chapter 6 ��ѧ���� 
//ϰ��6.1 �˽���(ʮ����ת�˽���)
//http://t.cn/AiCu0lHe

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

void Decimal_To_Eight(long long n){
	while(n != 0){
		int m = n % 8;
		s.push(m);
		n /= 8;
	}
}

int main(){
	long long n;
	while(cin >> n){
		Decimal_To_Eight(n);
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	return 0;
} 
