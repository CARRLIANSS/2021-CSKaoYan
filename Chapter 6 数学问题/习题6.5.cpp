/*
* ��Ŀ���ƣ���������
* ��Ŀ��Դ��������ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCua2g8
* �������ߣ�Carrlians
*/

#include <iostream>

using namespace std;

const int MAXN = 600 + 10;

int arr[MAXN];

int GCD(int a, int b){
	if(b == 0){
		return a;
	} else{
		return GCD(b, a % b);
	}
}

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int number = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(GCD(arr[i], arr[j]) == 1){
					number++;
				}
			}
		}
		cout << number << endl;
	}
	return 0;
}
