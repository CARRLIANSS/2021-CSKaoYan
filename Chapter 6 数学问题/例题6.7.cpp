/*
* 题目名称：素数判断
* 题目来源：哈尔滨工业大学复试上机题
* 题目链接：http://t.cn/AiCuWE0Q
* 代码作者：Carrlians
*/

//若有因数，因数关于sqrt(n)两边对称 

#include <iostream>
#include <cmath> 

using namespace std;

void Is_Zhishu(int n){
	if(n <= 1){
		cout << "no" << endl;
		return ;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cout << "no" << endl;
			return ;
		}
	}
	cout << "yes" << endl;
	return ;
}

int main(){
	int n;
	while(cin >> n){
		Is_Zhishu(n);
	}
	return 0;
}
