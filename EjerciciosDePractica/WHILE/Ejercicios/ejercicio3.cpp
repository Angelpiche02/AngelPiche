//Juego de Adivinanza con Intentos Limitados
//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.

#include <iostream>
using namespace std;

int main(){

    int intentos, a;
    int numero = 32;

    cout <<"ADIVINANZA! Escriba un numero del 1 al 50 para ver si le atina! Tiene 5 intentos"<< endl;
    cin >> a;


    while (a != numero)
    {
        for (int i = 0; i < 5; i++){

        if (a != numero){
            cout <<"El numero no es correcto, ingrese otro"<< endl;

            cin >> i;
            }
            
            else {}
        } 

    }

    cout <<"Has adivinado el numero!!!"<< endl;
    return 0;
}