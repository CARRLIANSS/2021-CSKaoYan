//Chapter 4 �ַ���
//����4.2 ���뷭�� 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;//string���������ո��ֹͣ�� 
	while(getline(cin, str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == 'Z'){
				str[i] = 'A';
			} else if(str[i] == 'z'){
				str[i] == 'a';
			} else if((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y')){
				str[i] = 'A' + str[i] - 'A' + 1;
			}
		}
		for(int i = 0; i < str.size(); i++){
			cout << str[i];
		}
		cout << endl;
	}
	return 0; 
}
