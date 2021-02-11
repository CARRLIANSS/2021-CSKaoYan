//Chapter 3 ��������� 
//����3.2 �ɼ����� 

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 + 10;

struct Student{
	int order;
	int score;
	//Student(int o, int s) : order(o), score(s){} //�������鲻���������ʼ������ 
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
