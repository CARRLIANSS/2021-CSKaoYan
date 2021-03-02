/*
* ��Ŀ���ƣ���root(N, k)
* ��Ŀ��Դ���廪��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AipAw4B1
* �������ߣ�Carrlians
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
