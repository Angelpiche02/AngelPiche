//Juego de Adivinanza con Intentos Limitados
//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.

#include <iostream> 
using namespace std;

int main(){

    int a = 37, numero;
    
    cout <<"Ingrese un numero para ver si es el correcto (tiene 5 intentos)"<< endl;
    cin >> numero;

    while (numero != a){

        cout <<"Se ha equivocado, ingrese nuevamente"<< endl;
        cin >> numero;

    }

    cout <<"Has adivinado!"<< endl;
    return 0;
}