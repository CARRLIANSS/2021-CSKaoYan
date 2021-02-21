//Chapter 5 数据结构一 
//例题5.5 括号匹配

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void BracketCheck(string &answer, string str){
	stack<char> s;
	stack<int> s1;//辅助栈 
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '('){
			s.push(str[i]);
			s1.push(i);
		} else if(str[i] == ')'){
			if(s.empty()){
				answer[i] = '?';
			} else{
				s.pop();
				s1.pop();
			}
		}
	}
	while(!s1.empty()){
		int index = s1.top();
		answer[index] = '$';
		s1.pop();
	}
}

int main(){
	string str;
	while(cin >> str){
		string answer(str.size(), ' ');
		BracketCheck(answer, str);
		cout << str << endl;
		cout << answer << endl;
	}
	
	return 0;
} 
