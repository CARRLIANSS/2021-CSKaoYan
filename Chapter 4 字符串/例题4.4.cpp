//Chapter 4 ×Ö·û´®
//ÀıÌâ4.4 Í³¼Æ×Ö·û

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	while(getline(cin, str1)){
		if(str1 == "#"){
			break;
		}
		getline(cin, str2);
		for(int i = 0; i < str1.size(); i++){
			int number = 0;
			char ch = str1[i];
			for(int j = 0; j < str2.size(); j++){
				if(str2[j] == ch){
					number++;
				}
			}
			cout << str1[i] << ' ' << number << endl;
		}
	}
	return 0;
} 
