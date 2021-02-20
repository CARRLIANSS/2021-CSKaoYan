//Chapter 4 字符串
//习题4.5 后缀子串排序

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int *arr;//动态数组 

int main(){
	string str;
	while(cin >> str){
		int n = str.size();
		arr = new int[n];
		fill(arr, arr + n, 0);
		for(int i = 0; i < str.size(); i++){
			char min = 'z' + 1;
			int index;
			for(int j = 0; j < str.size(); j++){
				if(str[j] < min && arr[j] == 0){
					min = str[j];
					index = j;
				} else if(str[j] == min && arr[j] == 0){
					int t = j - index;
					int k;
					for(k = j; k < str.size(); k++){
						if(str[k] < str[k - t]){
							min = str[j];
							index = j;
							break;
						} else if(str[k] > str[k - t]){
							break;
						}
					}
					if(k == str.size()){
						min = str[j];
						index = j;
					}
				}
			}
			arr[index] = 1;
			cout << str.substr(index, str.size() - index + 1) << endl;//substr(3, 5)从3开始后5位 
		}
	}
	return 0;
} 
