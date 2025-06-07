//Validación de Entrada
//Pide un número entre 1 y 10. Si el usuario ingresa un valor fuera de ese rango, debe volver a intentarlo hasta que lo haga correctamente.

#include <iostream> 
using namespace std;

int main (){

    int num, a=0;

    cout << "Ingrese un numero entre el 1 y 10"<< endl;
    cin >> num;

    while(num < 1 || num > 10){

            cout <<"Ingrese nuevamente un numero entre el 1 y el 10: "<< endl;
            cin >> num;
        
    }

    cout <<"Ok"<< endl;

    return 0;
}