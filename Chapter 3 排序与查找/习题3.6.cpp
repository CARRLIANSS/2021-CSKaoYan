//Chapter 3 ��������� 
//ϰ��3.6 ��ӡ��ֵ���±� 

#include <iostream>

using namespace std;

const int MAXN = 80;

int arr[MAXN];

void Print(int n){
	for(int i = 0; i < n; i++){
		if(i == 0){
			if(arr[i] != arr[i + 1]){
				cout << i << ' ';
			}
		} else if(i == n - 1){
			if(arr[i] != arr[i - 1]){
				cout << i << ' ';
			}
		} else{
			if(arr[i] < arr[i + 1] && arr[i] < arr[i - 1]){
				cout << i << ' ';
			} 
			if(arr[i] > arr[i + 1] && arr[i] > arr[i - 1]){
				cout << i << ' ';
			}
		}
	}
	cout << endl;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		Print(n);
	}
	return 0;
} 
