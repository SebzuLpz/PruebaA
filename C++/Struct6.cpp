#include <iostream>
using namespace std;

struct Patineta {
    string referencia;
    double valor;
};

int main() {
    Patineta patineta;
    cout << "Ingrese la referencia de la patineta: ";
    cin >> patineta.referencia;
    cout << "Ingrese el valor de la patineta: ";
    cin >> patineta.valor;

    int opcion;
    do {
        cout << endl;
        cout << "----- Menu -----" << endl;
        cout << "1. Credito" << endl;
        cout << "2. Debito" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        double descuento, tasa, cuota;
        long total, total1;

        switch (opcion) {
            case 1:
            	    tasa = 0.01;
    				 total = patineta.valor * (1 + tasa);
    				 cuota = total / 12;
     				cout << "Compra realizada a credito:" << endl;
    				cout << "Cuota mensual: " << cuota << endl;
    				cout << "Total a pagar: " << total << endl;
                break;
            case 2:
            		 descuento = 0.1;
    				 total1 = patineta.valor * (1 - descuento);
    				cout << "Compra realizada a debito:" << endl;
    				cout << "Total a pagar: " << total1 << endl;
                
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}

