#include <iostream>
using namespace std;

int main() { 
    int dias;

    cout << "Cuantos dias va a la Universidad: ";
    cin >> dias;

    if(dias== 7) {
        cout << "Usted va todos los dias a la Universidad"<<endl;
    }
    else if(dias>4){
        cout << "El numero ingresado es negativo." << endl;
    }
    else {  cout << "\nEl numero es cero.\n";
    system("pause");
	
}
}
