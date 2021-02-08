//Chapter 2 �������
//����2.3

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
	for(int i = 0; i <= 256; i++){
		int n = i * i;
		if(n = ReverseNumber(n)){
			cout << i << endl;
		}
	}
	return 0;
} 
