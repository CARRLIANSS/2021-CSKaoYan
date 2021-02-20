//Chapter 4 字符串
//习题4.2 单词替换
//用find时注意未找到情况 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, original, replace;
	while(getline(cin, str)){
		cin >> original;
		cin >> replace;
		//防止匹配到不是单词的子串 
		str = ' ' + str + ' ';
		original = ' ' + original + ' ';
		replace = ' ' + replace + ' ';
		while(1){
			int position = str.find(original, 0);
			if(position == string :: npos){
				break;
			} else{
				str.erase(position, original.size());
				str.insert(position, replace);
			}
		}
		cout << str.substr(1, str.size() - 2) << endl;
	}
	return 0;
} 
