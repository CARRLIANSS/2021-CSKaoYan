//Chapter 2 暴力求解
//习题2.2 百鸡问题 

#include <iostream>
#include <cmath>

using namespace std;

void Solution(int n){
	float a = 5.0, b = 3.0, c = 1.0 / 3;
	for(int i = 0; i <= 100; i++){
		for(int j = 0; j <= 100; j++){
			int k = 100 - i - j;
			if(i * a + j * b + k * c <= n){
				cout << "x=" << i << ',' << "y=" << j << ',' << "z=" << k << endl;
			}
		}
	}
	
}

int main(){
	int n;
	while(cin >> n){
		Solution(n);
	} 
	return 0;
} 
