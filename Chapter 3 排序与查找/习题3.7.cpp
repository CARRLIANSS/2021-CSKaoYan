//Chapter 3 排序与查找 
//习题3.7 找位置
//使用map与vector 

#include <iostream>
#include <string>
#include <map>
#include <vector> 

using namespace std;

map<char, vector<int> > myMap;//value使用向量来加入相同字符下标
vector<char> myVector;//用来解决容器内次序变了的问题 
 

int main(){
	string str;
	while(cin >> str){
		for(int i = 0; i < str.size(); i++){
			if(myMap.find(str[i]) == myMap.end()){
				vector<int> myVector1(1, i);
				myMap[str[i]] = myVector1;//插入进map容器中实际是自动进行了自平衡，容器内的次序不死插入的次序
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
