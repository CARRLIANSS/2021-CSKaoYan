/*
* ��Ŀ���ƣ�����
* ��Ŀ��Դ���������캽�մ�ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCulqtW
* �������ߣ�Carrlians
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
