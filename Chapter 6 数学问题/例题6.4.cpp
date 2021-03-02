//Chapter 6 数学问题 
//例题6.4 进制转换2(全部m进制转成10进制，再从10进制转成n进制) 
//http://t.cn/AiCuKG7E
//坑点：使用string的方法转换遇到问题：Multiply函数不适用 M>10 的，因为大于10不确定每次answer前面加的数（要重新设计Multiply）
//对于string方法，适用方向：大数，且输入数的进制小于10 

#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> s;

int To_Number(char c){
	if(c <= '9' && c >= '0'){
		return c - '0';
	} else{
		return c - 'A' + 10;
	}
}

char To_Char(int x){
	if(x >= 0 && x <= 9){
		return x + '0';
	} else{
		return x - 10 + 'a';
	}
}

long long M_To_Decimal(string str, int m){
	long long number = 0;
	for(int i = 0; i < str.size(); i++){
		number *= m;
		number += To_Number(str[i]);
	}
	return number;
}

void Decimal_To_N(long long num, int n){
	while(num != 0){
		int m = num % n;
		s.push(m);
		num /= n; 
	}
}

int main(){
	int m, n;
	while(cin >> m >> n){
		string str;
		cin >> str;
		long long num = M_To_Decimal(str, m);
		Decimal_To_N(num, n);
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	
	return 0;
}
