/*
* ��Ŀ���ƣ�Լ���ĸ���
* ��Ŀ��Դ���廪��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/Aip7dTUp
* �������ߣ�Carrlians
*/

#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 1000 + 10;

long long arr[MAXN];

int NumberOfCD(long long x){
	if(x == 1){
		return 1;
	}
	int number = 0;
	long long i; 
	for(i = 2; i < sqrt(x); i++){
		if(x % i == 0){
			number += 2;
		}
	}
	double t = sqrt(x);
	if(i == t){
		number++;
	}
	return number + 2;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			cout << NumberOfCD(arr[i]) << endl;
		}
	}
	
	return 0;
}
