//Chapter 2 �������
//����2.6 ����ĵڼ���

//���꣺��ͨ���꣨������4���Ҳ�������100�����������꣨������400�� 

#include <iostream>

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
