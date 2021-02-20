//Chapter 4 ×Ö·û´®
//ÀıÌâ4.5 ×ÖÄ¸Í³¼Æ

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int arr[26];

int main(){
	string str;
	while(getline(cin, str)){
		memset(arr, 0, sizeof(arr));
		for(int i = 0; i < str.size(); i++){
			if(str[i] <= 'Z' && str[i] >= 'A'){
				int index = str[i] - 'A';
				arr[index]++;
			}
		}
		for(int i = 0; i < 26; i++){
			char ch = 'A' + i;
			cout << ch << ':' << arr[i] << endl;
		}
	}	
	return 0;
}
