#include <iostream>
using namespace std;
void mostrarMatriz(int matriz[][2]) {
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int matriz1[2][2], matriz2[2][2], suma[2][2], multiplicacion[2][2], division[2][2], elevado[2][2], transpuesta[2][2];
  cout << "Ingrese los elementos de la primera matriz de 2x2:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz1[i][j];
    }
  }
  cout << "\nIngrese los elementos de la segunda matriz de 2x2:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz2[i][j];
    }
  }
  cout << "\nSuma de las dos matrices:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      suma[i][j] = matriz1[i][j] + matriz2[i][j];
      cout << suma[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\nMultiplicacion de las dos matrices:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      multiplicacion[i][j] = 0;
      for (int k = 1; k < 3; k++) {
        multiplicacion[i][j] += matriz1[i][k] * matriz2[k][j];
      }
      cout << multiplicacion[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\nDivision de las dos matrices:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      division[i][j] = matriz1[i][j] / matriz2[i][j];
      cout << division[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\nElevado de la primera matriz:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      elevado[i][j] = matriz1[i][j] * matriz1[i][j];
      cout << elevado[i][j] << " ";
}
	cout << endl;
}
 cout << "\nTranspuesta de la segunda matriz:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      transpuesta[j][i] = matriz2[i][j];
    }
  }
  mostrarMatriz(transpuesta);

  return 0;
}


