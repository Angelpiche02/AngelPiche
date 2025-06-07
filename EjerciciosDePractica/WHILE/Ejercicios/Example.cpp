//Cálculo del Factorial
//Solicita un número y usa while para calcular su factorial.

#include <iostream>

using namespace std;

int main (){

    int numero, a = 0, multi = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;
    
    while (numero > a){
        a++;

        multi *= a;

    }
    cout <<multi;

    return 0;
}