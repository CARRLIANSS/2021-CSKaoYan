//Chapter 4 ×Ö·û´®
//Ï°Ìâ4.5 ºó×º×Ó´®ÅÅÐò

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		string arr[str.size()];
		for(int i = 0; i < str.size(); i++){
			arr[i] = str.substr(i, str.size() - i + 1);
		}
		sort(arr, arr + str.size());
		for(int i = 0; i < str.size(); i++){
			cout << arr[i] << endl;
		}
	}
	
	return 0;
}
