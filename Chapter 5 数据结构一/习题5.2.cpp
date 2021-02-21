//Chapter 5 数据结构一 
//习题5.2 计算表达式

#include <iostream>
#include <stack>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

stack<char> s1;
stack<float> s2;

int Priority(char c){
	if(c == '*' || c == '/'){
		return 1;
	} else{
		return 0;
	}
}

void To_RearExpression(string &answer, string str){
	int j = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*'){
			answer[j++] = str[i];
		} else{
			int p1 = Priority(str[i]);
			while(!s1.empty()){
				char top = s1.top();
				int p2 = Priority(top);
				if(p2 >= p1){
					answer[j++] = top;
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
		answer[j++] = top;
		s1.pop();
	}
} 

float Get_Value(string str){
	float value = 0;
	for(int i = 0; i < str.size(); i++){
		value += (str[i] - '0') * pow(10, str.size() - i - 1);
	}
	return value;
}

float Calculate(float a, float b, char c){
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

float To_Value(string RearExpression, int arr[]){
	for(int i = 0, j = 0; i < RearExpression.size(); i++){
		if(RearExpression[i] != '+' && RearExpression[i] != '-' && RearExpression[i] != '/' && RearExpression[i] != '*'){
			int num = arr[j++];
			string str = RearExpression.substr(i, num);
			i = i + num - 1;
			float v1 = Get_Value(str);
			s2.push(v1);
		} else{
			float right = s2.top();
			s2.pop();
			float left = s2.top();
			s2.pop();
			float v2 = Calculate(left, right, RearExpression[i]);
			s2.push(v2);
		}
	}
	float answer = s2.top();
	s2.pop();
	return answer;
}

int main(){
	string str;
	while(cin >> str){
		//构建从左到右数字位数的辅助数组 
		int arr[str.size()];
		fill(arr, arr + str.size(), 0);
		for(int i = 0, p = 0; i < str.size(); i++){
			if(str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*'){
				int j = i;
				int num = 0;
				while(str[j] != '+' && str[j] != '-' && str[j] != '/' && str[j] != '*' && j < str.size()){
					j++;
					arr[p]++;
				}
				i = j - 1;
				p++;
			}
		}
		string RearExpression(str.size(), ' ');
		To_RearExpression(RearExpression, str);
		float answer = To_Value(RearExpression, arr);
		cout << answer << endl;
	}
	
	return 0;
} 
