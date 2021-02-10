//Chapter 2 暴力求解
//习题2.8 日期类

#include <iostream>
#include <cstdio>

using namespace std;

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	int n;
	int y, m, d;
	cin >> n;
	while(n--){
		cin >> y >> m >> d;
		if(m == 12 && d == day[m]){
			y++;
			m = 1;
			d = 1; 
		} else if(d == day[m]){
			m++;
			d = 1;
		} else{
			d++;
		}
		printf("%04d-%02d-%02d\n", y, m, d);
	}
	return 0;
} 
