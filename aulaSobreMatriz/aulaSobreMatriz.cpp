#include <iostream>
using namespace std;

int main()
{
	/*int matriz[4][4];

	cout << "Digite os elementos da matriz 4x4: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> matriz[i][j];
		}
	}
	cout << "Matriz Inserida: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}*/

	/*int matriz[6][6];
	cout << "Digite os elementos da matriz 10x10: " << endl;
      for (int l = 0; l < 6; l++) {
		for (int c = 0; c < 6; c++) {
			cin >> matriz[l][c];
		}
	}

	cout << "Sua matriz: " << endl;
	for (int l = 0; l < 6; l++) {
		for (int c = 0; c < 6; c++) {
			cout << matriz[l][c] << " ";
			
		}
		cout << endl;
	}*/

	int matrizA[4][4];
	int matrizB[4][4];
	int matrizSoma[4][4];

	cout << "Digite os numeros da matrizA 4x4: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> matrizA[i][j];
		}
	}
	cout << "Digite os numeros da matrizB 4x4: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> matrizB[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}


			cout << "Matriz somada: " << endl;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					cout << matrizSoma[i][j] << " ";
				}
				cout << endl;
			}
	return 0; 

}

