//Chapter 2 暴力求解
//例题2.7 打印日期

#include <iostream>
#include <cstdio> 

using namespace std;

int day[2][12] = {
{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//下为闰年

//闰年判断 
bool Is_LeapYear(int y){
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
		return true;
	} else{
		return false;
	}
}

void Print(int y, int n){
	int m = 1, d;
	if(Is_LeapYear(y)){
		int i = 0;
		while(n > day[1][i]){
			n -= day[1][i++];
			m++;
		}
		if(n == 0){
			d = day[1][m - 1];
		} else{
			d = n;
		}
	} else{
		int i = 0;
		while(n > day[0][i]){
			n -= day[0][i++];
			m++;
		}
		if(n == 0){
			d = day[0][m - 1];
		} else{
			d = n;
		}
	}
	printf("%04d-%02d-%02d\n", y, m, d);//使用c++补0方法复杂点，使用c语言的简单 
}

int main(){
	int y, n;
	while(cin >> y >> n){
		Print(y, n);
	}
	return 0;
} 
