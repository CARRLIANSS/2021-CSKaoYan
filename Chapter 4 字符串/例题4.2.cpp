//Chapter 4 ×Ö·û´®
//ÀıÌâ4.2 ÃÜÂë·­Òë 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;//stringÊäÈëÓöµ½¿Õ¸ñ¾ÍÍ£Ö¹ÁË 
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
