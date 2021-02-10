//Chapter 2 �������
//����2.7 ��ӡ����

#include <iostream>
#include <cstdio> 

using namespace std;

int day[2][12] = {
{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//��Ϊ����

//�����ж� 
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
	printf("%04d-%02d-%02d\n", y, m, d);//ʹ��c++��0�������ӵ㣬ʹ��c���Եļ� 
}

int main(){
	int y, n;
	while(cin >> y >> n){
		Print(y, n);
	}
	return 0;
} 
