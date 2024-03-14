#include <iostream>
using namespace std;
int main() {
  int matriz[2][4], traspuesta[4][2];
  cout << "Ingrese los elementos de la matriz de 2x4:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 5; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 5; j++) {
      traspuesta[j][i] = matriz[i][j];
    }
  }
  cout << "\nLa traspuesta de la matriz es:\n";
  for (int i = 1; i < 5; i++) {
    for (int j = 1; j < 3; j++) {
      cout << traspuesta[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

