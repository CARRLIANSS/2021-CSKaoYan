//Chapter 5 ���ݽṹһ 
//����5.2 Լɪ������No.2
//ѭ������ 

#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, p, m;
	while(cin >> n >> p >> m){
		if(n == 0 && p == 0 && m == 0){
			break;
		}
		queue<int> Children;
		for(int i = p; i <= n; i++){
			Children.push(i);
		}
		for(int i = 1; i < p; i++){
			Children.push(i);
		}
		int number = 0;
		while(!Children.empty()){
			number++;
			if(number == m){
				int num = Children.front();
				Children.pop();
				number = 0;
				if(Children.empty()){
					cout << num << endl;
				} else{
					cout << num << ',';
				}
			} else{
				int num = Children.front();
				Children.pop();
				Children.push(num);
			}
		}
	}
	return 0;
}
