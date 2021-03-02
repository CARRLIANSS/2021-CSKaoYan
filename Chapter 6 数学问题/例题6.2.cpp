//Chapter 6 数学问题 
//例题6.2 进制转换(long loong都装不下的数) 
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
		} //for循环一定要这样写 */
		while(answer[position] == '0'){
			position++;
		}//用while复杂度更低 
		answer = answer.substr(position, answer.size() - position);
	}
}

int main(){
	string str;//用字符串装数 
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
