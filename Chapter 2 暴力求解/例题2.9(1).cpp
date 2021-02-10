//Chapter 2 暴力求解
//例题2.9 剩下的树 


#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 10000 + 10;

bool flag[MAXN];

int main(){
	int L, M;
	while(cin >> L >> M){
		memset(flag, true, sizeof(flag));
		int number = 0;
		for(int i = 0; i < M; i++){
			int start, end;
			cin >> start >> end;
			for(int j = start; j <= end; j++){
				if(flag[j] == true){
					number++;
					flag[j] = false;
				}
			}
		}
		cout << L + 1 - number << endl;
	}
	return 0;
} 
