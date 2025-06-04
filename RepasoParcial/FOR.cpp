//Suma de los Primeros N Números
//Solicita un número N al usuario y calcula la suma de los primeros N números naturales.

#include <iostream>
using namespace std ;

int main (){

    int numero, resultado, r;

    cout <<"Ingrese un numero: ";
    cin >> numero;

    cout <<"La suma de los primeros n terminos es:"<< endl;

    for (int i = 0; i < numero; i++){

        resultado = numero - i ;

        r = resultado + i;

    }
    
    cout << "La suma es: "<< r << endl;
    

    return 0;
}