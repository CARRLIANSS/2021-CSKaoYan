//Chapter 2 �������
//����2.9 ʣ�µ��� 
//�ô�����Dev C++���Ա��룬��ţ���ϱ���ʧ�� 

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 100 + 10;

struct Interval{
	int start;
	int end;
	//Interval(int s, int e) : start(s), end(e){}//�ṹ��Ҫ��������ʱ�ǲ��ܼ���� 
	bool operator < (Interval interval) const {
		return start < interval.start;
	}
};

Interval intervals[MAXN];

int Number(int begin, int M, int number){
	if(begin == intervals[M - 1].start){
		number += (intervals[M - 1].end - intervals[M - 1].start + 1);
		return number;
	} else{
		int i;
		for(i = begin; i < M; i++){
			if(intervals[i].end <= intervals[i + 1].start){
				number += intervals[i].end - intervals[begin].start + 1;
				break;
			}
		}
		Number(i + 1, M, number);
	}
}

int main(){
	int L, M;
	while(cin >> L >> M){
		memset(intervals, 0, sizeof(intervals));
		for(int i = 0; i < M; i++){
			scanf("%d%d", &intervals[i].start, &intervals[i].end);
			//cin >> intervals[i].start << intervals[i].end;//����֪Ϊ��cin���� 
		}
		sort(intervals, intervals + M);
		int number = Number(0, M, 0);
		cout << L + 1 - number << endl;
	}
	return 0;
}
