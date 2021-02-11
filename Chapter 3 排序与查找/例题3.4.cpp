//Chapter 3 排序与查找 
//例题3.4 找x 
//采用二分查找 

#include <iostream>
#include <algorithm> 

using namespace std;

const int MAXN = 200 + 10;

struct Number{
	int number;
	int index;
	bool operator < (Number num) const {
		return number < num.number;
	}
}; 

Number arr[MAXN];

int Binary_Search(int low, int high, int key){
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid].number == key){
			return mid;
		} else if(arr[mid].number < key){
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	return low;
}//相当于lower_bound 

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i].number;
			arr[i].index = i;
		}
		sort(arr, arr + n);//二分查找一定要排序 
		int x;
		cin >> x;
		int p = Binary_Search(0, n - 1, x);
		int position = arr[p].index;
		if(arr[p].number == x){
			cout << position << endl;
		} else{
			cout << -1 << endl;
		}
	}
	return 0;
} 
