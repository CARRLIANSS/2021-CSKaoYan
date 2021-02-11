//Chapter 3 ��������� 
//ϰ��3.3 С�����Ŷ�

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

const int MAXN = 100 + 10;

struct Mouse{
	string color;
	int weight;
	bool operator < (Mouse mouse) const {
		return weight > mouse.weight;
	}
};

Mouse arr[MAXN];

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i].weight >> arr[i].color;
		}
		sort(arr, arr + n);
		for(int i = 0; i < n; i++){
			cout << arr[i].color << endl;
		}
	}
	return 0;
} 
