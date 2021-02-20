//Chapter 4 字符串
//习题4.4 浮点数加法
//小数点前后都对齐 

#include <iostream>
#include <string>

using namespace std;

void func(string &str1, string &str2){
	int i = str1.find('.');
	int j = str2.find('.');
	if(i < j){
		string substr(j - i, '0');
		str1.insert(0, substr);
	} else{
		string substr(i - j, '0');
		str2.insert(0, substr);
	}
	i = str1.find('.');//i、j的位置变了 
	j = str2.find('.');
	int num1 = str1.size() - i - 1;
	int num2 = str2.size() - j - 1;
	if(num1 < num2){
		string substr(num2 - num1, '0');
		str1 += substr;
	} else{
		string substr(num1 - num2, '0');
		str2 += substr;
	}
}

int main(){
	string str1, str2;
	while(cin >> str1){
		cin >> str2;
		func(str1, str2);
		string str(str1.size() + 1, ' ');
		bool flag = false;
		for(int i = str.size() - 1; i >= 0; i--){
			if(str1[i] != '.' && str2[i] != '.'){
				int number = (str1[i] - '0') + (str2[i] - '0');
				if(flag == true){
					str[i] = (number + 1) % 10 + '0';
					if(number + 1 >= 10){
						flag = true;
					} else{
						flag = false;
					}
				} else{
					str[i] = number % 10 + '0';
					if(number >= 10){
						flag = true;
					} else{
						flag = false;
					}
				}
			} else{
				str[i] = '.';
			}
		}
		if(str[0] == ' '){
			cout << str.substr(1, str.size() - 1) << endl;
		} else{
			cout << str.substr(0, str.size() - 1) << endl;
		}
	}
	return 0;
}
