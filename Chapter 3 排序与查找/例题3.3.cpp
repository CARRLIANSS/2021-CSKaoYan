//Chapter 3 ��������� 
//����3.3 �ɼ�����

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAXN = 1000 + 10;

struct Student{
	int score;
	string name;
	int order;
};

Student arr[MAXN];

//��С���� 
bool Compare1(Student x, Student y){
	if(x.score == y.score){
		return x.order < y.order;
	} else{
		return x.score < y.score;
	}
}

//�Ӵ�С 
bool Compare2(Student x, Student y){
	if(x.score == y.score){
		return x.order < y.order;
	} else{
		return x.score > y.score; 
	}
}

int main(){
	int n, method;
	while(cin >> n){
		cin >> method;
		for(int i = 0; i < n; i++){
			cin >> arr[i].name >> arr[i].score;
			arr[i].order = i;
		}
		if(method){
			sort(arr, arr + n, Compare1);
			for(int i = 0; i < n; i++){
				cout << arr[i].name << ' ' << arr[i].score << endl;
			}
		} else{
			sort(arr, arr + n, Compare2);
			for(int i = 0; i < n; i++){
				cout << arr[i].name << ' ' << arr[i].score << endl;
			}
		}
	}
	return 0;
}
