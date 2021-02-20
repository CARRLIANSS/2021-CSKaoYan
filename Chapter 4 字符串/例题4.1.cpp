//Chapter 4 ×Ö·û´®
//ÀıÌâ4.1 ÌØÊâ³Ë·¨

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	while(cin >> str1 >> str2){
		int sum = 0;
		for(int i = 0; i < str1.size(); i++){
			int a = str1[i] - '0';
			for(int j = 0; j < str2.size(); j++){
				int b = str2[j] - '0';
				sum += a * b;
			}
		}
		cout << sum << endl;
	}
	return 0;
} 
