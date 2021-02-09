//Chapter 2 暴力求解
//习题2.3 old bill

#include <iostream>
#include <algorithm>

using namespace std;

bool Correct(int x, int y, int z, int number){
	int price = x * 100 + y * 10 + z;
	if(number <= 99999 && number >= 10000){
		number %= 10000;
		number /= 10;
		if(number == price){
			return true;
		} else{
			return false;
		}
	} else{
		return false;
	}
}


int main(){
	int n, x, y, z;
	while(cin >> n){
		cin >> x >> y >> z;
		int answer = 0;
		for(int i = 1; i <= 99999; i++){
			if(Correct(x, y, z, i * n)){
				answer = max(answer, i * n);
			}
		}
		if(answer / 10000 == 0 && answer % 10 == 0 && answer / n == 0){
			cout << 0 << endl;
		} else{
			cout << answer / 10000 << ' ' << answer % 10 << ' ' << answer / n << endl;
		}
	}
	return 0;
} 
