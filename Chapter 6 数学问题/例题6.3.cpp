//Chapter 6 ��ѧ���� 
//����6.3 10���� VS 2���� 
//http://t.cn/AiCuoHKg

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> vec;

string Division(string answer){
	if(answer == "0"){
		vec.push_back(0);
	}
	int m = 0;
	//һ��Ҫ��d���� 
	for(int i = 0; i < answer.size(); i++){
		int d = (answer[i] - '0' + m * 10) / 2;
		m = (answer[i] - '0' + m * 10) % 2;
		answer[i] = d + '0';
	}
	int position = 0;
	while(answer[position] == '0'){
		position++;
	}
	answer = answer.substr(position);
	return answer;
}

string Multiply(string answer, int x){
	int f = 0;
	for(int i = answer.size() - 1; i >= 0; i--){ //�Ӻ���ǰ 
		int n = (answer[i] - '0') * x + f;
		answer[i] = n % 10 + '0';
		f = n / 10;
	}
	if(f > 0){
		answer = "1" + answer;//��һλ 
	}
	return answer;
}

string Add(string answer, int x){
	int f = 0;
	for(int i = answer.size() - 1; i >= 0; i--){ //�Ӻ���ǰ 
		int n = (answer[i] - '0') + x + f;
		answer[i] = n % 10 + '0';
		f = n / 10;
		if(f == 0){
			break;
		}
	}
	if(f > 0){
		answer = "1" + answer;
	}
	return answer;
}

void Binary(string str){
	while(str.size() != 0){
		int m = (str[str.size() - 1] - '0') % 2;
		vec.push_back(m);
		str = Division(str);
	}
}

int main(){
	string str;
	while(cin >> str){
		vec.clear();
		Binary(str);
		string answer = "0";
		for(int i = 0; i < vec.size(); i++){
			 answer = Multiply(answer, 2);
			 answer = Add(answer, vec[i]);
		}
		cout << answer << endl;
	}
	return 0;
} 
