/*
* 题目名称：又一版 A+B
* 题目来源：浙江大学复试上机题
* 题目链接：http://t.cn/AiCuOSWv
* 代码作者：Carrlians
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
