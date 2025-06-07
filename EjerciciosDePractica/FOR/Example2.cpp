//Invertir un Número
//Solicita un número y muestra su inverso (Ejemplo: 123 → 321).

#include <iostream>
using namespace std;

int main() {
    int numero, inverso = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Usamos una copia porque en el for modificamos "numero"
    for (; numero > 0; numero = numero / 10) {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
    }

    cout << "El numero invertido es: " << inverso << endl;

    return 0;
}


 