//Chapter 4 �ַ���
//����4.3 ������

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	while(getline(cin, str)){//START
		if(str == "ENDOFINPUT"){
			break;
		}
		getline(cin, str);//���� 
		for(int i = 0; i < str.size(); i++){
			if(str[i] <= 'Z' && str[i] >= 'A'){
				str[i] = (str[i] - 'A' - 5 + 26) % 26 + 'A';
			}
		}
		cout << str << endl;
		getline(cin, str);//END 
	}
	return 0;
} 
