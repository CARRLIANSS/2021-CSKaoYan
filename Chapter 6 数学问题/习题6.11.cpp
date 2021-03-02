/*
* 题目名称：递推数列
* 题目来源：清华大学复试上机题
* 题目链接：http://t.cn/AipbZ2sS
* 代码作者：Carrlians
*/

#include <iostream>

using namespace std;

int Fun(int k, int a0, int a1, int p, int q){
	int arr[2];
	arr[0] = a0 % 10000;
	arr[1] = a1 % 10000;
	for(int i = 2; i <= k; i++){
		int temp = (p * arr[1] + q * arr[0] ) % 10000;
		arr[0] = arr[1];
		arr[1] = temp;
	}
	return arr[1];
}

int main(){
	int a0, a1, p, q, k;
	while(cin >> a0 >> a1 >> p >> q >> k){
		int answer = Fun(k, a0, a1, p, q);
		cout << answer << endl;
	}
	
	return 0;
}
