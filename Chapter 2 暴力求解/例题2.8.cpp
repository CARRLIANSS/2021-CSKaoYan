//Chapter 2 �������
//����2.8 �����ۼ�

#include <iostream>

using namespace std;

int day[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};//��Ϊ����

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
	}//ȷ����
	m = 0;//û������һ��nҲ�Ǵ���ͷ��ʼ���
	row =  Is_LeapYear(y);//��ʱ��ȷ���� 
	while(n > day[row][m]){
		n -= day[row][m];
		m++;
	}
	d = n;//����0�µ����ü�n > day[row][m]�Ǵ���
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
