/*
* ��Ŀ���ƣ������ж�
* ��Ŀ��Դ����������ҵ��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCuWE0Q
* �������ߣ�Carrlians
*/

//������������������sqrt(n)���߶Գ� 

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
