//Chapter 2 暴力求解
//例题2.8 日期累加

#include <iostream>

using namespace std;

int day[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//下为闰年

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

void Print(int y, int m, int d, int n){
	int row = Is_LeapYear(y);
	for(int i = 0; i < m; i++){
		n += day[row][i];
	}
	n += d; 
	while(n > DaysOfYear(y)){
		n -= DaysOfYear(y);
		y++;
	}//确定年
	m = 0;//没超过这一年n也是从年头开始算的
	row =  Is_LeapYear(y);//此时年确定了 
	while(n > day[row][m]){
		n -= day[row][m];
		m++;
	}
	d = n;//由于0月的作用及n > day[row][m]是大于
	printf("%04d-%02d-%02d\n", y, m, d); 
}

int main(){
	int casenumber;
	cin >> casenumber;
	while(casenumber--){
		int y, m, d, n;
		cin >> y >> m >> d >> n;
		Print(y, m, d, n);
	}
	return 0;
}
