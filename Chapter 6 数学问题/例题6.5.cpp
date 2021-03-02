/*
* 题目名称：最大公约数
* 题目来源：哈尔滨工业大学复试上机题
* 题目链接：http://t.cn/AiCuWLTS
* 代码作者：Carrlians
*/

#include <iostream>

using namespace std;

int GCD(int a, int b){
	if(b == 0){//余数为0时，b一定小于a，不小的话算话逻辑是会交换再进行 
		return a;
	} else{
		return GCD(b, a % b);
	} 
}

int main(){
	int a, b;
	while(cin >> a >> b){
		int number = GCD(a, b);
		cout << number << endl;
	}
	return 0;
}
