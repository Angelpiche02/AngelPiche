//Suma de Dígitos
//Pide un número y suma todos sus dígitos hasta obtener un solo dígito.

#include <iostream>

using namespace std;

int main(){

    int num, n = 0, suma = 0;
    cout <<"Ingrese un numero"<< endl;
    cin >> num;

    while (num > n){
        n++;

        suma += n;
    }
     cout <<suma;

    return 0;
}