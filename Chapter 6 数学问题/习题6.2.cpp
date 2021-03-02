/*
* ��Ŀ���ƣ���һ�� A+B
* ��Ŀ��Դ���㽭��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCuOSWv
* �������ߣ�Carrlians
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

void Decimal_To_M(long long n, int m){
	if(n == 0){
		s.push(0);
	}
	while(n != 0){
		int mo = n % m;
		s.push(mo);
		n /= m;
	}
}

int main(){
	int a, b, m;
	while(cin >> m){
		if(m == 0){
			break;
		}
		cin >> a >> b;
		long long number = a + b;
		Decimal_To_M(number, m);
		while(!s.empty()){
			cout << s.top();
			s.pop();
		} 
		cout << endl;
	}
	
	return 0;
}
