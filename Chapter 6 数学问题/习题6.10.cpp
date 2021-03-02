/*
* 题目名称：A+B for Matrices
* 题目来源：浙江大学复试上机题
* 题目链接：http://t.cn/Aipb7GBG
* 代码作者：Carrlians
*/

#include <iostream>

using namespace std;

const int MAXN = 100 + 1;

struct Matrix{
	int row, col;
	int matrix[MAXN][MAXN];
	Matrix(int r, int c) : row(r), col(c){}
};

Matrix Add(Matrix x, Matrix y){
	Matrix answer(x.row, y.col);
	for(int i = 0; i < x.row; i++){
		for(int j = 0; j < y.col; j++){
			answer.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
		}
	}
	return answer;
}

int NumberOfZero(Matrix x){
	bool flag = false;
	int number = 0;
	for(int i = 0; i < x.row; i++){
		for(int j = 0; j < x.col; j++){
			if(x.matrix[i][j] != 0){
				flag = true;
				break;
			}
		}
		if(!flag){
			number++;
		} 
		flag = false;
	}
	flag = false;
	for(int i = 0; i < x.col; i++){
		for(int j = 0; j < x.row; j++){
			if(x.matrix[j][i] != 0){
				flag = true;
				break;
			}
		}
		if(!flag){
			number++;
		} 
		flag = false;
	}
	return number;
}

int main(){
	int r, c;
	while(cin >> r){
		if(r == 0){
			break;
		}
		cin >> c;
		Matrix arr1(r, c);
		Matrix arr2(r, c);
		for(int i = 0; i < arr1.row; i++){
			for(int j = 0; j < arr1.col; j++){
				cin >> arr1.matrix[i][j];
			}
		}
		for(int i = 0; i < arr2.row; i++){
			for(int j = 0; j < arr2.col; j++){
				cin >> arr2.matrix[i][j];
			}
		}
		Matrix answer = Add(arr1, arr2);
		int number = NumberOfZero(answer);
		cout << number << endl;
	}
	return 0;
} 
