/*
* ��Ŀ���ƣ����Լ��
* ��Ŀ��Դ����������ҵ��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/AiCuWLTS
* �������ߣ�Carrlians
*/

#include <iostream>

using namespace std;

int GCD(int a, int b){
	if(b == 0){//����Ϊ0ʱ��bһ��С��a����С�Ļ��㻰�߼��ǻύ���ٽ��� 
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
