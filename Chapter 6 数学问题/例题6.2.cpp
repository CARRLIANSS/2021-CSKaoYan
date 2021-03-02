//Chapter 6 ��ѧ���� 
//����6.2 ����ת��(long loong��װ���µ���) 
//http://t.cn/AiCuoPRO

#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> s;

string Division(string answer){
	int m = 0;
	for(int i = 0; i < answer.size(); i++){
		 int d = (answer[i] - '0' + m * 10) / 2;
		 m = (answer[i] - '0' + m * 10) % 2;
		 answer[i] = d + '0';
	}
	return answer;
}

void Binary(string answer){ 
	if(answer == "0"){
		s.push(0);
	}
	while(answer.size() != 0){
		int m = (answer[answer.size() - 1] - '0') % 2;
		s.push(m);
		answer = Division(answer);
		int position = 0;
		/*for(int i = 0; i < answer.size(); i++){
			if(answer[i] == '0'){
				position++;
			}else{
				break;
			}
		} //forѭ��һ��Ҫ����д */
		while(answer[position] == '0'){
			position++;
		}//��while���Ӷȸ��� 
		answer = answer.substr(position, answer.size() - position);
	}
}

int main(){
	string str;//���ַ���װ�� 
	while(cin >> str){
		Binary(str);
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
