#include <iostream>
using namespace std;
int main() {
  int matriz[3][3], total = 0;
  cout << "Ingrese los elementos de la matriz de 3x3:\n";
  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) {
      total += matriz[i][j];
    }
  }
  cout << "\nEl total de los elementos de la matriz es: " << total << endl;
  return 0;
}

