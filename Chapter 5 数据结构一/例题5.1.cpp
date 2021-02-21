//Chapter 5 数据结构一 
//例题5.1 完数与盈数

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> Wanshu;
	vector<int> Yingshu;
	for(int i = 2; i <= 60; i++){
		int number = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				number += j;
			}
		}
		if(number == i){
			Wanshu.push_back(i);
		} else if(number > i){
			Yingshu.push_back(i);
		}
	}
	cout << "E: ";
	for(int i = 0; i < Wanshu.size(); i++){
		cout << Wanshu[i] << ' ';
	}
	cout << endl;
	cout << "G: ";
	for(int i = 0; i < Yingshu.size(); i++){
		cout << Yingshu[i] << ' ';
	}
	cout << endl;
	return 0;
} 
