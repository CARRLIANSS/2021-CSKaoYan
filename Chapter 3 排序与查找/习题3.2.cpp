//Chapter 3 排序与查找 
//习题3.2 整数奇偶排序

#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

//从小到大排序 
bool Compare1(int x, int y){
	return x < y;
}

//从大到小 
bool Compare2(int x, int y){
	return x > y;
} 

int main(){
	while(cin >> arr[0]){
		for(int i = 1; i < 10; i++){
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + 10, Compare2);
		for(int i = 0; i < 10; i++){
			if(arr[i] % 2 != 0){
				cout << arr[i] << ' ';
			}
		}
		sort(arr, arr + 10, Compare1);
		for(int i = 0; i < 10; i++){
			if(arr[i] % 2 == 0){
				cout << arr[i] << ' ';
			}
		}
	}
	return 0;
} 
