//Chapter 2 暴力求解
//例题2.1

#include <iostream>

using namespace std;

void Function(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < 10; k++){
				if(i * 100 + j * 10 + k + j * 100 + k * 10 + k == 532){
					cout << i << j << k << endl;
				}
			}
		} 
	}
	
}

int main(){
	Function();
	return 0;
} 
