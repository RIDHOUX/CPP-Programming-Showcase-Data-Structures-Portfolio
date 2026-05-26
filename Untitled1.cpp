#include <iostream>
using namespace std;

int main(){
	int matrix[3][3] = {{1, 4, 7},
	 					{2, 5, 8},
						{3, 6, 9}};
						
	cout << "Matrix Awal:" << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matrix[i][j]<< " ";
		}
		cout << endl;
	}
	
	int tm[3][3];
	for (int i = 0; i< 3; i++){
		for (int j = 0; j < 3; j++){
			tm[j][i] = matrix[i][j];
		}
	}
	
	cout << "Matrix Transpose:" << endl;
	for (int i=0; i< 3; i++){
		for (int j=0; j< 3; j++){
			cout << tm[i][j]<< " ";
		}
		cout << endl;
	}
	return 0;
}