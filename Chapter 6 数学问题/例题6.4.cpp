//Chapter 6 ��ѧ���� 
//����6.4 ����ת��2(ȫ��m����ת��10���ƣ��ٴ�10����ת��n����) 
//http://t.cn/AiCuKG7E
//�ӵ㣺ʹ��string�ķ���ת���������⣺Multiply���������� M>10 �ģ���Ϊ����10��ȷ��ÿ��answerǰ��ӵ�����Ҫ�������Multiply��
//����string���������÷��򣺴��������������Ľ���С��10 

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
