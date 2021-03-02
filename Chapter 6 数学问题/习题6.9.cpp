/*
* 题目名称：求root(N, k)
* 题目来源：清华大学复试上机题
* 题目链接：http://t.cn/AipAw4B1
* 代码作者：Carrlians
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

long long QuickPow(int x, int y){
	long long answer = 0;
	while(y != 0){
		if(y % 2 == 1){
			answer *= x;
		}
		y >>= 1;
		x *= x;
	}
	return answer;
}

void Decimal_To_K(long long n, int k){
	while(n != 0){
		int m = n % k;
		s.push(m);
		n /= k;
	}
}

long long Root(long long n, int k){
	Decimal_To_K(n, k);
	long long number = 0;
	while(!s.empty()){
		number += s.top();
		s.pop();
	}
	n = number;
	return n;
}

int main(){
	int x, y, k;
	while(cin >> x >> y >>k){
		long long n = QuickPow(x, y);
		while(n > k){
			n = Root(n, k);
		}
		if(n == 0){
			n = k - 1;
		}
		cout << n << endl;
	}
	return 0;
}
