//Chapter 5 ���ݽṹһ 
//����5.6 �򵥼�����

#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

//���ȼ��ж�
int Priority(char c){
	if(c == '*' || c == '/'){
		return 1;
	} else{
		return 0;
	}
} 

//ת��׺���ʽ 
void To_RearExpression(string &Rear_Expression, string str, stack<char> &s1){
	int j = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*'){
			Rear_Expression[j++] = str[i];
		} else{
			int p1 = Priority(str[i]);
			while(!s1.empty()){
				char top = s1.top();
				int p2 = Priority(top);
				if(p2 >= p1){
					Rear_Expression[j++] = top;
					s1.pop();
				} else{
					break;
				}
			}
			s1.push(str[i]);	
		}
	}
	while(!s1.empty()){
		char top = s1.top();
		Rear_Expression[j++] = top;
		s1.pop();
	}
}

//�õ����ֵ�ֵ
float Get_Value(string str){
	float value = 0;
	for(int i = 0; i < str.size(); i++){
		float v = str[i] - '0';
		value += v * pow(10, str.size() - i - 1);
	}
	return value;
} 

//��������
float Calculate(float a, float b, char c){
	float answer;
	if(c == '+'){
		return a + b;
	} else if(c == '-'){
		return a - b;
	} else if(c == '*'){
		return a * b;
	} else{
		return a / b;
	}
} 

//��ֵ
float To_Value(string Rear_Expression, stack<float> &s2, int arr[]){
	for(int i = 0, j = 0; i < Rear_Expression.size(); i++){
		if(Rear_Expression[i] != '+' && Rear_Expression[i] != '-' && Rear_Expression[i] != '/' && Rear_Expression[i] != '*'){
			int num = arr[j++];
			string str = Rear_Expression.substr(i, num);
			i = i + num - 1;
			float v1 = Get_Value(str);
			s2.push(v1);
		} else{
			float right = s2.top();
			s2.pop();
			float left = s2.top();
			s2.pop();
			float v2 = Calculate(left, right, Rear_Expression[i]);
			s2.push(v2);
		}
	}
	return s2.top();
} 


int main(){
	string str;
	while(getline(cin, str)){
		if(str == "0"){
			break;
		}
		//1����¼ÿ�����ֵ�λ��
		int size = str.size();
		int arr[size];//��¼�����������ֵ�λ�� 
		fill(arr, arr + size, 0);
		for(int i = 0, p = 0; i < str.size(); i++){
			if(str[i] != ' ' && str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*'){
				int j = i;
				while(str[j] != ' ' && str[j] != '+' && str[j] != '-' && str[j] != '/' && str[j] != '*' && j < str.size()){
					arr[p]++;
					j++;
				}
				p++;
				i = j;
			}
		}
		//2��ȥ���ո�
		int number = 0;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == ' '){
				number++;
			} else{
				str[i - number] = str[i]; 
			}
		}
		str = str.substr(0, str.size() - number);
		string Rear_Expression(str.size(), ' '); 
		To_RearExpression(Rear_Expression, str, s1);
		float answer = To_Value(Rear_Expression, s2, arr);
		printf("%.2f\n", answer);
	}
	return 0;
} 
