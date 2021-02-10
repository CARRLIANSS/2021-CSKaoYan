//Chapter 2 �������
//ϰ��2.4 Repeater

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

const int MAXN = 3000 + 10;

char pattern[5][5];
char answer[MAXN][MAXN];

void Fill(int x, int y, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			answer[i + x][j + y] = pattern[i][j];
		}
	}
}

void DFS(int x, int y, int q, int n){
	if(q == 1){
		Fill(x, y, n);
		return ;
	}
	int size = pow(n, q -1);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(pattern[i][j] != ' '){
				DFS(x + i * size, y + j * size, q - 1, n);
			}
		}
	}
}

int main(){
	int n, q;
	while(cin >> n){
		if(n == 0){
			break;
		}
		getchar();//ʹ��scanf��ȡ�ַ�Ҫ���س�����ȥ 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				//cin >> pattern[i][j];//����ʹ��cin��cin���м�Ŀո���̵� 
				scanf("%c", &pattern[i][j]);//����һ���ַ�sanf�Զ����������Ӧλ�� 
			}
			getchar();
		}
		scanf("%d", &q);
		memset(answer, 32, sizeof(answer));
		DFS(0, 0, q, n);
		for(int i = 0; i < pow(n, q); i++){
			for(int j = 0; j < pow(n, q); j++){
				cout << answer[i][j];
			}
			cout << endl;
		}
	}
	
	return 0;
}
