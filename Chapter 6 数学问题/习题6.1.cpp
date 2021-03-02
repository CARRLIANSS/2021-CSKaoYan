//Chapter 6 数学问题 
//习题6.1 八进制(十进制转八进制)
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
