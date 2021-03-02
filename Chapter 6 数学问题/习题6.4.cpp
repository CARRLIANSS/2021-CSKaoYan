/*
* 题目名称：数制转换
* 题目来源：北京大学复试上机题
* 题目链接：http://t.cn/AiCu6ne4
* 代码作者：Carrlians
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<char> s;//转换结果可能大于10进制 

int To_Number(char c){
	if(c >= '0' && c <= '9'){
		return c - '0';
	} else if(c >= 'a' && c <= 'z'){
		return c - 'a' + 10;
	} else{
		return c - 'A' + 10;
	}
} 

char To_Char(int x){
	if(x >= 0 && x <= 9){
		return x + '0';
	} else{
		return x - 10 + 'A';
	}
}


long long A_To_Decimal(string str, int a){
	long long number = 0;
	for(int i = 0; i < str.size(); i++){
		number *= a;
		number += To_Number(str[i]);
	}
	return number;
}

void Decimal_To_B(long long number, int b){
	while(number != 0){
		int m = number % b;
		char c = To_Char(m);
		s.push(c);
		number /= b;
	}
}

int main(){
	int a, b;
	string n;
	while(cin >> a >> n >> b){
		long long number = A_To_Decimal(n, a);
		Decimal_To_B(number, b);
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	
	return 0;
}
