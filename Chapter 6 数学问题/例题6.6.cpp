/*
* ��Ŀ���ƣ���С������
* ��Ŀ��Դ��HDU 1108
* ��Ŀ���ӣ�http://acm.hdu.edu.cn/showproblem.php?pid=1108
* �������ߣ�Carrlians
*/

#include <iostream>

using namespace std;

int GCD(int a, int b){
	if(b == 0){
		return a;
	} else{
		return GCD(b, a % b);
	}
}

int  main(){
	int a, b;
	while(cin >> a >> b){
		int n1 = a * b;
		int n2 = GCD(a, b);
		cout << n1 / n2 << endl;
	}
	return 0;
}
