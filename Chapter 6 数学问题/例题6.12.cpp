/*
* 题目名称：计算两个矩阵的乘积
* 题目来源：北京邮电大学复试上机题
* 题目链接：http://t.cn/Aip4T3HX
* 代码作者：Carrlians
*/

#include <iostream>

using namespace std;

const int MAXN = 10 + 1;

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

Matrix QuickPow(Matrix arr, int k){
	Matrix answer(arr.row, arr.col);
	for(int i = 0; i < answer.row; i++){
		for(int j = 0; j < answer.col; j++){
			if(i == j){
				answer.matrix[i][j] = 1;
			} else{
				answer.matrix[i][j] = 0;
			}
		}
	}
	while(k != 0){
		if(k % 2 == 1){
			answer = Matrix_Multiply(answer, arr);
		}
		k /= 2;
		arr = Matrix_Multiply(arr, arr);
	}
	return answer;
}

int main(){
	int casenumber;
	int n, k;
	cin >> casenumber;
	while(casenumber--){
		cin >> n >> k;
		Matrix arr(n, n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> arr.matrix[i][j];
			}
		}
		Matrix answer = QuickPow(arr, k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << answer.matrix[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
} 
