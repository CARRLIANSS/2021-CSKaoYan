//Chapter 3 排序与查找 
//习题3.5 找最小数

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000 + 10;

struct Data{
	int x;
	int y;
	bool operator < (Data data) const {
		if(x == data.x){
			return y < data.y;
		} else{
			return x < data.x;
		}
	}
};

Data arr[MAXN];

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i].x >> arr[i].y;
		}
		sort(arr, arr + n);
		cout << arr[0].x << ' ' << arr[0].y << endl;
	}
	return 0;
} 
