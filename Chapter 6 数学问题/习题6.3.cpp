/*
* ��Ŀ���ƣ�����ת��
* ��Ŀ��Դ��������ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCuig9B
* �������ߣ�Carrlians
*/

#include <iostream>
#include <stack>

using namespace std;

int To_Number(char c){
	if(c >= '0' && c <= '9'){
		return c - '0';
	} else{
		return c - 'A' + 10;
	}
}

long long Sixteen_To_Decimal(string str){
	long long number = 0;
	for(int i = 2; i < str.size(); i++){
		number *= 16;
		number += To_Number(str[i]);
	}
	return number;
}

int main(){
	string str;
	while(cin >> str){
		long long answer = Sixteen_To_Decimal(str);
		cout << answer << endl;
	}
	return 0;
}
