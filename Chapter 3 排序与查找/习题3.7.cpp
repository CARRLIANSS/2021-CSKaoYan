//Chapter 3 ��������� 
//ϰ��3.7 ��λ��
//ʹ��map��vector 

#include <iostream>
#include <string>
#include <map>
#include <vector> 

using namespace std;

map<char, vector<int> > myMap;//valueʹ��������������ͬ�ַ��±�
vector<char> myVector;//������������ڴ�����˵����� 
 

int main(){
	string str;
	while(cin >> str){
		for(int i = 0; i < str.size(); i++){
			if(myMap.find(str[i]) == myMap.end()){
				vector<int> myVector1(1, i);
				myMap[str[i]] = myVector1;//�����map������ʵ�����Զ���������ƽ�⣬�����ڵĴ���������Ĵ���
				myVector.push_back(str[i]); 
			} else{
				myMap[str[i]].push_back(i);
			}
		}
		map<char, vector<int> > :: iterator it;
		for(int i = 0; i < myVector.size(); i++){
			for(it = myMap.begin(); it != myMap.end(); it++){
				if(it->first == myVector[i]){
					if(it->second.size() > 1){
						int i;
						for(i = 0; i < it->second.size() - 1; i++){
							cout << it->first << ':' << it->second[i] <<',';
						}
						cout << it->first << ':' << it->second[i] << endl; 
					}
				}
			}
		}
	}
	
	return 0;
}
