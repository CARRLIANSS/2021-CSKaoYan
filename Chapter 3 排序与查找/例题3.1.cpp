//Chapter 3 ≈≈–Ú”Î≤È’“ 
//¿˝Ã‚3.1 ≈≈–Ú

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 + 10;

int arr[MAXN];

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for(int i = 0; i < n; i++){
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	return 0;
} 
