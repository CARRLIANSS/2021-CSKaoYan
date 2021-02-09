//Chapter 2 �������
//ϰ��2.4 �������

#include <iostream>

using namespace std;

void OutputLadderShaped(int h){
	int bottom = h + 2 * (h - 1);
	for(int i = h; i <= bottom; i += 2){
		int j = bottom - i;
		int k = i;
		while(j){
			cout << ' ';
			j--;
		}
		while(k){
			cout << '*';
			k--;
		}
		cout << endl;
	}
}

int main(){
	int h;
	while(cin >> h){
		OutputLadderShaped(h);
	}
	return 0;
} 
