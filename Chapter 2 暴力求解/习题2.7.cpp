//Chapter 2 暴力求解
//习题2.7 Day Of Week

#include <iostream>
#include <string>

using namespace std;

int day[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//下为闰年
string month[13] = {
"0", "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December"
};
string weekday[7] = {
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

bool Is_LeapYear(int y){
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int DaysOfYear(int y){
	if(Is_LeapYear(y)){
		return 366;
	} else{
		return 365;
	}
}

int Number(int y, int m, int d){
	int number = 0;
	for(int i = 1; i < y; i++){
		number += DaysOfYear(i);
	}
	int row = Is_LeapYear(y);
	for(int i = 0; i < m; i++){
		number += day[row][i];
	}
	number += d;
	return number;
}


int main(){
	int d, y, m;
	string mon;
	while(cin >> d >> mon >> y){
		for(int i = 0; i < 13; i++){
			if(mon == month[i]){
				m = i;
			}
		}//字符串转关成数字 
		int number = Number(y, m, d);
		cout << weekday[number % 7] << endl;
	}
	return 0;
}
