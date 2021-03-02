/*
* 题目名称：最小公倍数
* 题目来源：HDU 1108
* 题目链接：http://acm.hdu.edu.cn/showproblem.php?pid=1108
* 代码作者：Carrlians
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
