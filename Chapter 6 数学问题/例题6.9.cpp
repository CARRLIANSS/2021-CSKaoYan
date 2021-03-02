/*
* ��Ŀ���ƣ������ӵĸ���
* ��Ŀ��Դ���廪��ѧ�����ϻ���
* ��Ŀ���ӣ�http://t.cn/Aip7J0Oo
* �������ߣ�Carrlians
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> vec;

bool Is_Zhishu(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

void Initial(int n){
	vec.clear();
	for(int i = 2; i <= n; i++){
		if(Is_Zhishu(i)){
			vec.push_back(i);
		}
	}
}

int main(){
	int n;
	while(cin >> n){
		Initial(n);
		int number = 0;
		for(int i = 0; i < vec.size() && vec[i] < n; i++){
			int factor = vec[i];
			while(n % factor == 0){
				n /= factor;
				number++;
			}
		}
		if(n > 1){
			number++;
		}
		cout << number << endl;
	}
	return 0;
}
