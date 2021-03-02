/*
* 题目名称：素数
* 题目来源：北京航天航空大学复试上机题
* 题目链接：http://t.cn/AiCulqtW
* 代码作者：Carrlians
*/

#include <iostream>
#include <cmath>

using namespace std;

bool Is_Zhishu(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 1; i < n; i++){
			if(Is_Zhishu(i)){
				if(i % 10 == 1){
					cout << i << ' ';
				}
			}
		}
		cout << endl;
	}
	return 0;
}
