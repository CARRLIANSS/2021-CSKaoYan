//Chapter 2 暴力求解
//例题2.6 今年的第几天

//闰年：普通闰年（能整除4，且不能整除100）；世纪闰年（能整除400） 

#include <iostream>

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

int Calculate(int y, int m, int d){
	int answer = 0;
	if(Is_LeapYear(y)){
		for(int i = 0; i < m - 1; i++){
			answer += day[1][i];
		}
		answer += d;
	} else{
		for(int i = 0; i < m - 1; i++){
			answer += day[0][i];
		}
		answer += d;
	}
	return answer;
}

int main(){
	int y, m, d;
	while(cin >> y >> m >> d){
		int answer = Calculate(y, m, d);
		cout << answer << endl;
	}
	return 0;
} 
