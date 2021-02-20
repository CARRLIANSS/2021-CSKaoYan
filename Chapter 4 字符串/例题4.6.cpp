//Chapter 4 �ַ���
//����4.6 Number Sequence

#include <iostream>

using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN];//���� 
int b[MAXN];//ģʽ�� 

int Match(int n, int m){
	int i = 1, j = 1, k = 1;
	while(i <= n && j <= m){
		if(a[i] == b[j]){
			i++;
			j++;
		} else{
			k++;//ȷ��λ����
			j = 1;
			i = k; 
		}
	}
	if(j > m){
		return k;
	} else{
		return -1;
	}
}

int main(){
	int casenumber;
	cin >> casenumber;
	while(casenumber--){
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= m; i++){
			cin >> b[i];
		}
		int answer = Match(n, m);
		cout << answer << endl;
	}
	return 0;
} 
