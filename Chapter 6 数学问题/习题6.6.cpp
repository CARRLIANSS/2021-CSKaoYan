/*
* ��Ŀ���ƣ�Prime Number
* ��Ŀ��Դ���Ϻ���ͨ��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCulrSh
* �������ߣ�Carrlians
*/

#include <iostream>
#include <cmath>

using namespace std;

bool Is_Zhishu(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return false;
		}
	}
	return true; 
}

int main(){
	int k;
	while(cin >> k){
		int number = 0;
		int i = 2;
		while(number != k){
			if(Is_Zhishu(i)){
				number++;
			}
			i++;
		}
		cout << i - 1 << endl;
	}
	return 0;
}
