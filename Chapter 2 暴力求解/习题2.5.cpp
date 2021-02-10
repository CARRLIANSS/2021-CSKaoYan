//Chapter 2 暴力求解
//习题2.5 Hello World for U

#include <iostream>
#include <string>

using namespace std;

int data[2];
char **answer;//声明动态二维数组 

void HighAndBottom(int n){
	for(int i = 3; i <= n; i++){
		for(int j = i; j >= 1; j--){
			if(2 * j + i - 2 == n){
				data[0] = i;//宽 
				data[1] = j;//高 
				return ;
			}
		}
	}
}

int main(){
	string str;
	while(cin >> str){
		int n = str.size();
		HighAndBottom(n);
		int bottom = data[0];
		int high = data[1];
		answer = new char*[bottom];
		for(int i = 0; i < bottom; i++){
			answer[i] = new char[high];
		}
		for(int i = 0; i < high; i++){
			for(int j = 0; j < bottom; j++){
				answer[i][j] = ' ';
			}
		} //动态二维数组不能用memset 
		int number = 0;
		for(int i = 0; i < high; i++){
			answer[i][0] = str[number++];
		}
		for(int i = 1; i < bottom - 1; i++){
			answer[high - 1][i] = str[number++];
		}
		for(int i = high - 1; i >= 0; i--){
			answer[i][bottom - 1] = str[number++];
		}
		for(int i = 0; i < high; i++){
			for(int j = 0; j < bottom; j++){
				cout << answer[i][j];
			}
			cout << endl;
		}
	}
	return 0;
} 
