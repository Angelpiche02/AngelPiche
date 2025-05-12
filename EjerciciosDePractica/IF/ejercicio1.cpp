//Precio de Entrada a un Parque
//Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.

#include <iostream>
using namespace std;

int main(){
    int edad;

    cout <<"Ingrese su edad"<< endl;
    cin>> edad;

    if (edad <= 0 || edad >= 100){
        cout <<"No puedes tener esa edad"<< endl;
    }
    else if (edad < 5){
        cout <<"El precio de entrada es gratis"<< endl;
    }
    else if (edad >= 5 && edad <= 12){
        cout <<"El precio de entrada es de $5"<< endl;
    }
    else if (edad > 12){
        cout <<"El precio de entrada es de $10"<< endl;
    }
    else{}



    return 0;
}