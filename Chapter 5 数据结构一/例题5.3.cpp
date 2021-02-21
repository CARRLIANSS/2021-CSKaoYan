//Chapter 5 数据结构一 
//例题5.3 猫狗收容所

#include <iostream>
#include <queue>

using namespace std;

queue<int> dogs;
queue<int> cats;
queue<int> animal;

void Animal_in(int order){
	if(order > 0){
		dogs.push(order);
		animal.push(order);
	} else{
		cats.push(order);
		animal.push(order);
	}
}

void Animal_out(int method){
	if(method == 0){
		int order = animal.front();
		animal.pop();
		if(order > 0){
			dogs.pop();
		} else{
			cats.pop();
		}
		cout << order << ' ';
	} else if(method == 1){
		int order = dogs.front();
		dogs.pop();
		cout << order << ' ';
	} else{
		int order = cats.front();
		cats.pop();
		cout << order << ' ';
	}
}

int main(){
	int casenumber;
	cin >> casenumber;
	while(casenumber--){
		int m, t;
		cin >> m >> t;
		if(m == 1){
			Animal_in(t);
		} else{
			Animal_out(t);
		}
	}
	return 0;
} 
