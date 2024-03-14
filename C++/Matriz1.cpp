#include <iostream>
using namespace std;

int main() {
  int matriz[2][2];
  cout << "Ingrese los elementos de la matriz de 2x2:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  cout << "\nMatriz original:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\nTraspuesta de la matriz:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << matriz[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}

