//Chapter 3 排序与查找 
//例题3.5 查找

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 + 10;

int a[MAXN];
int b[MAXN];

bool YesOrNo(int target, int n){
	int position = lower_bound(a, a + n, target) - a;
	if(a[position] == target){
		return true;
	} else{
		return false;
	}
}

int main(){
	int n, m;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		for(int i = 0; i < m; i++){
			if(YesOrNo(b[i], n)){
				cout << "YES" << endl;
			} else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
} 
