//Chapter 2 �������
//ϰ��2.1 ��7�޹ص��� 

#include <iostream>

using namespace std;

bool Seven(int x){
	if(x % 7 == 0){
		return true;
	}
	while(x != 0){
		if(x % 10 == 7){
			return true;
		}
		x /= 10;
	}
	return false;
}

int main(){
	int sum = 0;
	for(int i = 0; i < 100; i++){
		if(!Seven(i)){
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
