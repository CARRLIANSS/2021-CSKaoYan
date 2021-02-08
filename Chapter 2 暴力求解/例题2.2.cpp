//Chapter 2 �������
//����2.2

#include <iostream>

using namespace std;

int ReverseNumber(int x){
	int rev = 0;
	while(x != 0){
		rev *= 10;
		rev += x % 10;
		x /= 10;
	}
	return rev;
}

int main(){
	for(int i = 1000; i < 10000; i++){
		if(i * 9 == ReverseNumber(i)){
			cout << i << endl;
		}
	}
	return 0;
} 
