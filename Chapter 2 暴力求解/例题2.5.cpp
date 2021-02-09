//Chapter 2 暴力求解
//习题2.5 叠筐

#include <iostream>

using namespace std;

const int MAXN = 80 + 1;

char answer[MAXN][MAXN];

void Diekuang(int n, int v, int mid, char ch){
	int distance = mid - v;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == mid - distance && j <= mid + distance && j >= mid - distance){
				answer[i][j] = ch;
			}
			if(i == mid + distance && j <= mid + distance && j >= mid - distance){
				answer[i][j] = ch;
			}
			if(j == mid - distance && i <= mid + distance && i >= mid - distance){
				answer[i][j] = ch;
			} 
			if(j == mid + distance && i <= mid + distance && i >= mid - distance){
				answer[i][j] = ch;
			}
		}
	}
	
}

int main(){
	int n;
	char ch1, ch2;
	bool flag = true;
	while(cin >> n){
		cin >> ch1 >> ch2;
		int mid = n / 2;
		if(flag){
			flag == false;
		} else{
			cout << endl;
		}
		for(int i = mid; i >= 0; i--){
			char ch;
			if(mid % 2 == 0){
				if(i % 2 == 0){
					ch = ch1;
				} else{
					ch = ch2;
				}
			} else{
				if(i % 2 != 0){
					ch = ch1;
				} else{
					ch = ch2;
				}
			}
			Diekuang(n, i, mid, ch);
		}
		if(n != 1){
			answer[0][0] = ' ';
			answer[0][n - 1] = ' ';
			answer[n - 1][0] = ' ';
			answer[n - 1][n - 1] = ' ';
		} 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << answer[i][j];
			}
			cout << endl;
		}	
	}
	return 0;
} 
