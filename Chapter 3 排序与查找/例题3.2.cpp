//Chapter 3 排序与查找 
//例题3.2 成绩排序 

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 + 10;

struct Student{
	int order;
	int score;
	//Student(int o, int s) : order(o), score(s){} //构建数组不能有这个初始化函数 
	bool operator < (Student student) const {
		if(score == student.score){
			return order < student.order;
		} else{
			return score < student.score;
		}
	}
};

Student arr[MAXN];

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> arr[i].order >> arr[i].score;
		}
		sort(arr, arr + n);
		for(int i = 0; i < n; i++){
			cout << arr[i].order << ' ' << arr[i].score << endl;
		}
	}
	
	return 0;
}
