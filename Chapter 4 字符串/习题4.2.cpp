//Chapter 4 �ַ���
//ϰ��4.2 �����滻
//��findʱע��δ�ҵ���� 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, original, replace;
	while(getline(cin, str)){
		cin >> original;
		cin >> replace;
		//��ֹƥ�䵽���ǵ��ʵ��Ӵ� 
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
