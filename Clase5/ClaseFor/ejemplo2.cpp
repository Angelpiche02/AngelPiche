#include <iostream>

using namespace std;

int man(){
    int N, suma = 0;

    cout <<"Ingrese un numero entero: ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        suma += i;
    }

    cout  <<"La suma de los primeros " << N << "numeros es: " <<suma << endl;


    return 0;
}