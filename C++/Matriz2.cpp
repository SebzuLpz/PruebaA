#include <iostream>
using namespace std;
int main() {
  int matriz1[2][2], matriz2[2][2], producto[2][2];
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
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      producto[i][j] = 0;
      for (int k = 1; k < 3; k++) {
        producto[i][j] += matriz1[i][k] * matriz2[k][j];
      }
    }
  }
  cout << "\nEl producto de las dos matrices es:\n";
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 3; j++) {
      cout << producto[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

