//Chapter 2 暴力求解
//习题2.6 日期差值

#include <iostream>
#include <cstdio>

using namespace std;

int day[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//下为闰年

bool Is_LeapYear(int y){
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

//比较哪个日期在前哪个在后
bool Compare(int y1, int m1, int d1, int y2, int m2, int d2){
	if(y1 > y2){
		return true;
	} else if(m1 > m2){
		return true;
	} else if(d1 > d2){
		return true;
	} else{
		return false;
	}
}

int DaysOfYear(int y){
	if(Is_LeapYear(y)){
		return 366;
	} else{
		return 365;
	}
}

int Number(int y1, int y2, int m, int d){
	int number = 0;
	int row = Is_LeapYear(y2);
	while(y1 != y2){
		number += DaysOfYear(y1);
		y1++;
	}
	for(int i = 0; i < m; i++){
		number += day[row][i];
	}
	number += d;
	return number;
}

int main(){
	int y1, m1, d1;
	int y2, m2, d2;
	while(scanf("%04d%02d%02d", &y1, &m1, &d1) != EOF){
		scanf("%04d%02d%02d", &y2, &m2, &d2);
		int data[2][3] = { {y1, m1, d1}, {y2, m2, d2} };
		int row;
		if(Compare(y1, m1, d1, y2, m2, d2)){
			row = 1;
			int number1 = Number(data[row][0], data[row][0], data[row][1], data[row][2]);
			int number2 = Number(data[row][0], data[row - 1][0], data[row - 1][1], data[row - 1][2]);
			cout << number2 - number1 + 1<< endl;
		} else{
			row = 0;
			int number1 = Number(data[row][0], data[row][0], data[row][1], data[row][2]);
			int number2 = Number(data[row][0], data[row + 1][0], data[row + 1][1], data[row + 1][2]);
			cout << number2 - number1 + 1 << endl;
		}
	}
	return 0;
} 
