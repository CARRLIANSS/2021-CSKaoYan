//Chapter 4 字符串
//习题4.3 首字母大写

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		for(int i = 0, j = 0; i < str.size(); i++){
			if(str[i] >= 'a' && str[i] <= 'z' && j == 0){
				str[i] = toupper(str[i]);//转为大写字母 
				j++;
			} else if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'){
				j = 0;
			} else{
				j++;
			}
		}
		cout << str << endl;
	}
	return 0;
} 
