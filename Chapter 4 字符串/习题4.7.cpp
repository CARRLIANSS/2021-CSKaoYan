//Chapter 4 ×Ö·û´®
//Ï°Ìâ4.7 String Matching

#include <iostream>

using namespace std;

int Match(string str1, string str2){
	int n = str1.size();
	int m = str2.size();
	int i = 0, j = 0, k = 0;
	int number = 0;
	while(k < (n - m + 2)){
		while(i < n && j < m){
			if(str1[i] == str2[j]){
				i++;
				j++;
			} else{
				k++;
				j = 0;
				i = k;
			}
		}
		if(j == m){
			number++;
		}
		j = 0;
		k++;
		i = k;
	}
	return number;
}

int main(){
	string str1, str2;
	while(cin >> str1 >> str2){
		int answer = Match(str1, str2);
		cout << answer << endl;
	}
	return 0;
}
