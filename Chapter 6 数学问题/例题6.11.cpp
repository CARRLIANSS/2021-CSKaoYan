  
/*
* 题目名称：计算两个矩阵的乘积
* 题目来源：哈尔滨工业大学复试上机题
* 题目链接：http://t.cn/Aip450PJ
* 代码作者：Carrlians
*/

#include <iostream>

using namespace std;

const int MAXN = 100;

struct Matrix{
	int row, col;
	int matrix[MAXN][MAXN];
	Matrix(int r, int c) : row(r), col(c){}
};

Matrix Matrix_Multiply(Matrix arr1, Matrix arr2){
	Matrix answer(arr1.row, arr2.col);
	for(int i = 0; i < arr1.row; i++){
		for(int j = 0; j < arr2.col; j++){
			answer.matrix[i][j] = 0;
			for(int k = 0; k < arr1.col; k++){
				answer.matrix[i][j] += arr1.matrix[i][k] * arr2.matrix[k][j];
			}
		}
	}
	return answer;
}

int main(){
	Matrix arr1(2,3);
	Matrix arr2(3, 2);
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
	Matrix answer = Matrix_Multiply(arr1, arr2);
	for(int i = 0; i < answer.row; i++){
		for(int j = 0; j < answer.col; j++){
			cout << answer.matrix[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
