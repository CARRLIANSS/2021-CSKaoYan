//Chapter 4 �ַ���
//ϰ��4.5 ��׺�Ӵ�����

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int *arr;//��̬���� 

int main(){
	string str;
	while(cin >> str){
		int n = str.size();
		arr = new int[n];
		fill(arr, arr + n, 0);
		for(int i = 0; i < str.size(); i++){
			char min = 'z' + 1;
			int index;
			for(int j = 0; j < str.size(); j++){
				if(str[j] < min && arr[j] == 0){
					min = str[j];
					index = j;
				} else if(str[j] == min && arr[j] == 0){
					int t = j - index;
					int k;
					for(k = j; k < str.size(); k++){
						if(str[k] < str[k - t]){
							min = str[j];
							index = j;
							break;
						} else if(str[k] > str[k - t]){
							break;
						}
					}
					if(k == str.size()){
						min = str[j];
						index = j;
					}
				}
			}
			arr[index] = 1;
			cout << str.substr(index, str.size() - index + 1) << endl;//substr(3, 5)��3��ʼ��5λ 
		}
	}
	return 0;
} 
