/*
* ��Ŀ���ƣ��˼��˰�A^B
* ��Ŀ��Դ��HDU 2035
* ��Ŀ���ӣ�http://acm.hdu.edu.cn/showproblem.php?pid=2035
* �������ߣ�Carrlians
*/

#include <iostream>

using namespace std;

int QuickPow(int a, int b, int m){
	int answer = 1;
	a %= m;
	while(b != 0){
		if(b % 2 == 1){
			answer *= a;
			answer %= m;
		}
		a *= a;
		a %= m;
		b >>= 1;
	} 
	return answer;
}

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0){
			break;
		}
		int answer = QuickPow(a, b, 1000);
		cout << answer << endl;
	}
	return 0;
}
